/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:09:45 by cowen             #+#    #+#             */
/*   Updated: 2022/02/21 20:53:44 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP
#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack(){}
		~MutantStack(){}
		MutantStack(const MutantStack& rhs){
			this->c = rhs.c;
		}
		MutantStack& operator=(const MutantStack& rhs){
			if (this != &rhs)
				this->c = rhs.c;
			return (*this);
		}
		iterator begin(){
			return this->c.begin();
		}
		iterator end(){
			return this->c.end();
		}
};
#endif
