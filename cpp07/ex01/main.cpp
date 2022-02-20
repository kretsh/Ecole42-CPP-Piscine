/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:06:16 by cowen             #+#    #+#             */
/*   Updated: 2022/02/20 15:44:47 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "iter.hpp"

// class Awesome{
// 	public: 
// 		Awesome(void) : _n(42){ return; }
// 		int get(void) const {return this->_n; }
// 	private:
// 		int	_n;
// };
// std::ostream& operator<<(std::ostream&o, Awesome const &rhs) {o << rhs.get(); return o;}

// template <typename T>
// void print(T const& x) {std::cout << x << std::endl; return; }

template <typename T>
void square(T& x) { x *= x; return; }

int main(){
	int tab[] = {0, 1, 2, 3, 4};
	// Awesome tab2[5];

	// iter(tab, 5, print);
	// iter(tab2, 5, print);
	iter(tab, 5, square);
	std::cout << "First element: " << tab[0] << std::endl;
	std::cout << "Second element: " << tab[1] << std::endl;
	std::cout << "Third element: " << tab[2] << std::endl;
	std::cout << "Fourth element: " << tab[3] << std::endl;
	std::cout << "Fifth element: " << tab[4] << std::endl;

	return 0;
}
