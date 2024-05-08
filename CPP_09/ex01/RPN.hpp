/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:37:03 by bberthod          #+#    #+#             */
/*   Updated: 2024/04/19 15:11:47 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
#include <exception>

class FirstDigit : public std::exception
{
	const char* what() const throw(){
		return "The first character should always be a digit";
	}
};

class WrongChar : public std::exception
{
	const char* what() const throw(){
		return "The expression should only be composed of positive integers < 10 and operators seperated by spaces";
	}
};

class WrongNumberOfOperators : public std::exception
{
	const char* what() const throw(){
		return "There should be 1 more value than there are operators in the expression";
	}
};

class WrongNumberOfOperands : public std::exception
{
	const char* what() const throw(){
		return "There should 2 values in the stack before making an operation";
	}
};



class RPN
{
	private:
		std::stack<double> _stack;

		void makeOperation(char op, double operand1, double operand2);
		bool isOperator(const char& c) const;
		void checkExpression(const std::string& expression);
		void printStack(std::stack<double> s);

	public:
		RPN(void);
		RPN(const RPN& rhs);
		RPN& operator=(const RPN& rhs);
		~RPN(void);

		double evaluate(const std::string& expression);
};

#endif

// Prenons l'expression 3 4 + 5 * pour voir comment elle est traitée :

// Lire 3 : Empiler 3.
// Pile : [3]
// Lire 4 : Empiler 4.
// Pile : [3, 4]
// Lire + : Dépiler les deux derniers nombres, additionner, et empiler le résultat.
// Dépiler : 4 et 3
// Calculer : 3 + 4 = 7
// Empiler le résultat : 7
// Pile : [7]
// Lire 5 : Empiler 5.
// Pile : [7, 5]
// **Lire *** : Dépiler les deux derniers nombres, multiplier, et empiler le résultat.
// Dépiler : 5 et 7
// Calculer : 7 * 5 = 35
// Empiler le résultat : 35
// Pile : [35]
// À la fin de l'expression, la pile contient un seul élément, 35, qui est le résultat de l'expression RPN.

// Mécanisme de la Pile dans le Code
// Imaginons que nous ayons les méthodes suivantes dans notre classe RPN :

// void push(double value) : Empile une valeur.
// top() : Retourne la derniere valeur.
// double pop() : Dépile la dernière valeur.
