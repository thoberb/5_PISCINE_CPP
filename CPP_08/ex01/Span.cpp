/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:17:28 by blandineber       #+#    #+#             */
/*   Updated: 2024/05/04 19:20:34 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _N(5)
{
	std::cout << "Default constructor called for Span" << std::endl;
}

Span::Span(unsigned int N) : _N(N)
{
	std::cout << "Constructor called for Span" << std::endl;
}

Span::Span(const Span& span)
{
	std::cout << "Copy constructor called for Span" << std::endl;
	_N = span._N;
	_numbers = span._numbers;
}

Span& Span::operator=(const Span& span)
{
	std::cout << "Copy assignment operator called for Span" << std::endl;
	if (this != &span)
	{
		this->_N = span._N;
		this->_numbers = span._numbers;
	}
	return (*this);
}

Span::~Span(void)
{
	std::cout << "Destructor called for Span" << std::endl;
}

void Span::addNumber(int number)
{
	if (_numbers.size() < _N)
		_numbers.push_back(number);
	else
		throw MaximumMet();
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{

	if (_numbers.size() + std::distance(begin, end) > _N)
		throw std::runtime_error("Adding these numbers exceeds Span capacity.");
	_numbers.insert(_numbers.end(), begin, end);
}

int Span::shortestSpan() const
{
	if (_numbers.size() < 2)
		throw MinimumForSpan();
	std::vector<int> sorted(_numbers);
	std::sort(sorted.begin(), sorted.end());
	int minSpan = std::numeric_limits<int>::max();
	for (size_t i = 0; i < sorted.size() - 1; i++)
	{
		int currentSpan = sorted[i + 1] - sorted[i];
		if (currentSpan < minSpan)
			minSpan = currentSpan;
	}
	return (minSpan);
}

int Span::longestSpan() const
{
	if (_numbers.size() < 2)
		throw MinimumForSpan();
	int min = *std::min_element(_numbers.begin(), _numbers.end());
	int max = *std::max_element(_numbers.begin(), _numbers.end());
	return (max - min);
}



