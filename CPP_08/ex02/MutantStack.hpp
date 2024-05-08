/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 15:11:39 by blandineber       #+#    #+#             */
/*   Updated: 2024/04/07 16:15:46 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <deque>
# include <stack>
# include <list>
# include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	MutantStack() : std::stack<T>() {}
	MutantStack(const MutantStack &src) : std::stack<T>(src) {}
	~MutantStack() {}

	MutantStack &operator=(const MutantStack &rhs) {
		if (this != &rhs)
			std::stack<T>::operator=(rhs);
		return *this;
	}

	iterator begin() { return std::stack<T>::c.begin(); }
	iterator end() { return std::stack<T>::c.end(); }
	const_iterator begin() const { return std::stack<T>::c.begin(); }
	const_iterator end() const { return std::stack<T>::c.end(); }
};

#endif

