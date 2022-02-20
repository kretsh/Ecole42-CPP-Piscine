
#ifndef EASYFIND_TPP
#define EASYFIND_TPP
#include "easyfind.hpp"
#include <vector>

template<class T>
typename T::value_type & easyFind(T &container, int toFind){
	
	typename T::iterator rv = (std::find(container.begin(), container.end(), toFind));
	if (rv == container.end())
		throw std::exception();
	
	return (*rv);
}

#endif