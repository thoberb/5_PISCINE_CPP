/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:15:16 by bberthod          #+#    #+#             */
/*   Updated: 2024/04/19 18:05:00 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <sstream>
# include <vector>
# include <list>
# include <sys/time.h>

class MoreThanOne : public std::exception
{
	public:
		const char* what() const throw(){
			return "There must be at least 2 integers to sort";
		}
};

class WrongSequence : public std::exception
{
	public:
		const char* what() const throw(){
			return "The sequence must be composed of postive integers only";
		}
};

class FailedConversion : public std::exception
{
	public:
		const char* what() const throw(){
			return "Conversion failed";
		}
};

class PmergeMe
{
	private:
		std::list<int> _list;
		std::vector<int> _vector;

		std::list<int> sortList(std::list<int>& list);
		std::list<int> mergeLists(std::list<int>& A, std::list<int>& B);
		std::vector<int> mergeVectors(std::vector<int>& A, std::vector<int>& B);
		std::vector<int> sortVector(std::vector<int>& vector);
		void checkSequence(char** argv) const;
		void printVector(const std::vector<int>& vec);
		void printList(const std::list<int>& lst);

	public:
		PmergeMe(void);
		PmergeMe(const PmergeMe& rhs);
		PmergeMe& operator=(const PmergeMe& rhs);
		~PmergeMe(void);

		void sort(char** argv);
};

#endif
