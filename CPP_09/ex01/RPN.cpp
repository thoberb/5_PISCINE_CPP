/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:39:15 by bberthod          #+#    #+#             */
/*   Updated: 2024/04/19 15:00:38 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include "sstream"

RPN::RPN(void)
{
	std::cout << "Constructor called for RPN" << std::endl;
}

RPN::RPN(const RPN &rhs) : _stack(rhs._stack)
{
	std::cout << "Copy constructor called for RPN" << std::endl;
}

RPN &RPN::operator=(const RPN &rhs)
{
	std::cout << "Copy assignment operator called for RPN" << std::endl;

	if (this != &rhs)
		this->_stack = rhs._stack;
	return (*this);
}

RPN::~RPN(void)
{
	std::cout << "Destructor called for RPN" << std::endl;
}

bool RPN::isOperator(const char &c) const
{
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return true;
	return false;
}

void RPN::checkExpression(const std::string &expression)
{
	int values = 0;
	int operators = 0;
	int operandCount = 0;
	int i = 0;

	while (expression[i] == ' ' && expression[i] != '\0')
		i++;

	if (!isdigit(expression[i]))
		throw FirstDigit();

	for (i = 0; expression[i] != '\0'; i++)
	{
		if (expression[i] == ' ')
			continue;
		else if (isOperator(expression[i]) == false && !isdigit(expression[i]))
			throw WrongChar();
		else if (isOperator(expression[i]) == true && (expression[i + 1] == ' ' || expression[i + 1] == '\0'))
		{
			if (operandCount < 2)
				throw WrongNumberOfOperands();
			operandCount -= 1;
			operators++;

		}
		else if (isdigit(expression[i]) && (expression[i + 1] == ' ' || expression[i + 1] == '\0'))
		{
			values++;
			operandCount++;
		}
		else
			throw WrongChar();
	}
	if (operators != values - 1)
		throw WrongNumberOfOperators();
}

void RPN::makeOperation(char op, double operand1, double operand2)
{
	if (op == '+')
		_stack.push(operand1 + operand2);
	else if (op == '-')
		_stack.push(operand1 - operand2);
	else if (op == '*')
		_stack.push(operand1 * operand2);
	else if (op == '/')
		_stack.push(operand1 / operand2);

}

void RPN::printStack(std::stack<double> s)
{
	std::stack<double> tempStack;

	while (!s.empty()) {
		double topElement = s.top();
		s.pop();
		std::cout << topElement << " ";
		tempStack.push(topElement);
	}
	std::cout << std::endl;

	while (!tempStack.empty()) {
		s.push(tempStack.top());
		tempStack.pop();
	}
}

double RPN::evaluate(const std::string &expression)
{
	double operand1 = 0;
	double operand2 = 0;

	checkExpression(expression);
	for (int i = 0; expression[i] != '\0'; i++)
	{
		if (expression[i] == ' ')
			continue;
		else if (isdigit(expression[i]))
		{
			_stack.push(expression[i] - '0');
		//	printStack(_stack);
		}
		else if (isOperator(expression[i]))
		{
			operand2 =_stack.top();
			_stack.pop();
		//	printStack(_stack);
			operand1 = _stack.top();
			_stack.pop();
		//	printStack(_stack);
			makeOperation(expression[i], operand1, operand2);
		//	printStack(_stack);

		}
	}
	if(_stack.size() == 1)
		return (_stack.top());
	else
		throw WrongNumberOfOperands();
}
