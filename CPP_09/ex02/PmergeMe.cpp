/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:15:06 by bberthod          #+#    #+#             */
/*   Updated: 2024/04/19 18:12:51 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
	std::cout << "Constructor called for PmergeMe" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe& rhs) : _list(rhs._list), _vector(rhs._vector)
{
	std::cout << "Copy constructor called for PmergeMe" << std::endl;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& rhs)
{
	std::cout << "Copy assignement operator called for PmergeMe" << std::endl;
	if (this != &rhs)
	{
		this->_list = rhs._list;
		this->_vector = rhs._vector;
	}
	return (*this);
}

PmergeMe::~PmergeMe(void)
{
	std::cout << "Destructor called for PmergeMe" << std::endl;
}

//-------------------SORT & MERGE LISTS-------------------------

std::list<int> PmergeMe::mergeLists(std::list<int>& A, std::list<int>& B)
{
	std::list<int> result;
	std::list<int>::iterator itA = A.begin();
	std::list<int>::iterator itB = B.begin();

	while (itA != A.end() && itB != B.end())
	{
		if (*itA <= *itB)
			result.push_back(*itA++);
		else
		{
			result.push_back(*itB++);
			while (itA != A.end() && *itA <= *itB)
				result.push_back(*itA++);
		}
	}
	result.insert(result.end(), itA, A.end());
	result.insert(result.end(), itB, B.end());

	return result;
}

std::list<int> PmergeMe::sortList(std::list<int>& list)
{
	if (list.size() <= 1)
		return list;

	std::list<int> A, B;
	std::list<int>::const_iterator it = list.begin();

	while (it != list.end())
	{
		int first = *it;
		++it;

		if (it != list.end())
		{
			int second = *it;
			++it;
			if (first <= second)
			{
				A.push_back(first);
				B.push_back(second);
			}
			else
			{
				A.push_back(second);
				B.push_back(first);
			}
		}
		else
		{
			A.push_back(first);
		}
	}
	A = sortList(A);
	B = sortList(B);
	return (mergeLists(A, B));
}

//-------------------SORT & MERGE VECTORS-------------------------

std::vector<int> PmergeMe::mergeVectors(std::vector<int>& A, std::vector<int>& B)
{
	std::vector<int> result;
	std::vector<int>::iterator itA = A.begin();
	std::vector<int>::iterator itB = B.begin();

	while (itA != A.end() && itB != B.end())
	{
		if (*itA <= *itB)
			result.push_back(*itA++);
		else
		{
			result.push_back(*itB++);
			while (itA != A.end() && *itA <= *itB)
				result.push_back(*itA++);
		}
	}
	result.insert(result.end(), itA, A.end());
	result.insert(result.end(), itB, B.end());

	return result;
}

std::vector<int> PmergeMe::sortVector(std::vector<int>& vector)
{
	if (vector.size() <= 1)
		return vector;

	std::vector<int> A, B;
	std::vector<int>::const_iterator it = vector.begin();

	while (it != vector.end())
	{
		int first = *it;
		++it;

		if (it != vector.end())
		{
			int second = *it;
			++it;
			if (first <= second)
			{
				A.push_back(first);
				B.push_back(second);
			}
			else
			{
				A.push_back(second);
				B.push_back(first);
			}
		}
		else
		{
			A.push_back(first);
		}
	}
	A = sortVector(A);
	B = sortVector(B);
	return (mergeVectors(A, B));
}

//-------------CHECK_ERRORS-------------

void PmergeMe::checkSequence(char** argv) const
{
	for(int i = 1; argv[i]; i++)
	{
		for(int j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]))
				continue;
			else
				throw WrongSequence();
		}
	}
}

//------------------PRINT--------------

void PmergeMe::printVector(const std::vector<int>& vec)
{
	for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void PmergeMe::printList(const std::list<int>& lst)
{
	for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

//------------MAIN FUNCTION--------------------

void PmergeMe::sort(char** argv)
{
	checkSequence(argv);
	int num;
	struct timeval Vstart, Vend;
	struct timeval Lstart, Lend;


	for (int i = 1; argv[i]; i++)
	{
		std::istringstream iss(argv[i]);
		if (!(iss >> num))
			throw FailedConversion();
		_list.push_back(num);
		_vector.push_back(num);
	}


	//VECTOR
	std::cout << "Vector before : ";
	printVector(_vector);

	std::cout << "Vector after : ";
	gettimeofday(&Vstart, NULL);
	printVector(sortVector(_vector));
	gettimeofday(&Vend, NULL);

	long Vseconds = Vend.tv_sec - Vstart.tv_sec;
	long Vmicros = ((Vseconds * 1000000) + Vend.tv_usec) - (Vstart.tv_usec);
	std::cout << "Sorting the sequence with the vector took " << Vmicros << " microseconds." << std::endl;

	std::cout << std::endl;

	//LIST
	std::cout << "List before : ";
	printList(_list);

	std::cout << "List after : ";
	gettimeofday(&Lstart, NULL);
	printList(sortList(_list));
	gettimeofday(&Lend, NULL);

	long Lseconds = Lend.tv_sec - Lstart.tv_sec;
	long Lmicros = ((Lseconds * 1000000) + Lend.tv_usec) - (Lstart.tv_usec);
	std::cout << "Sorting the sequence with the list took " << Lmicros << " microseconds." << std::endl;
}
