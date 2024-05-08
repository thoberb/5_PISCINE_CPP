/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:04:24 by blandineber       #+#    #+#             */
/*   Updated: 2024/05/04 19:20:48 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <limits>
# include <exception>

class MaximumMet : public std::exception
{
	public:
		const char* what() const throw(){
			return "The maximum of numbers in stock has been met";
		}
};

class MinimumForSpan : public std::exception
{
	public:
		const char* what() const throw(){
			return "There must be minimum 2 numbers in stock to do a span check";
		}
};

class Span
{
	private:
		unsigned int _N;
		std::vector<int> _numbers;
	public:
		Span(void);
		Span(unsigned int N);
		Span(const Span& span);
		Span& operator=(const Span& span);
		~Span(void);

		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		void addNumber(int number);
		int shortestSpan(void)const;
		int longestSpan(void) const;
};

#endif
