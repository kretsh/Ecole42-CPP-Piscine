/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:09:38 by cowen             #+#    #+#             */
/*   Updated: 2022/02/21 20:52:55 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// int main()
// {
// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737); 
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite) {
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::stack<int> s(mstack);
	
// 	return 0;
// }

int main(){
	MutantStack<int> firststack;
	firststack.push(5);
	firststack.push(17);
	MutantStack<int> secondstack;
	secondstack = firststack;
	std::cout << "First stack size: " << firststack.size() << std::endl;
	std::cout << "Second stack size: " << secondstack.size() << std::endl;
	MutantStack<int>::iterator it = secondstack.begin();
	std::cout << "First element of Second Stack: " << *it << std::endl;
	std::cout << "First element of Second Stack: " << *(it + 1) << std::endl;
	MutantStack<int>::iterator it_last = secondstack.end();
	secondstack.push(10);
	std::cout << "Last element of Second stack: " << *it_last << std::endl;


}