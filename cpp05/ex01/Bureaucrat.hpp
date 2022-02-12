/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:30:02 by cowen             #+#    #+#             */
/*   Updated: 2022/02/12 17:02:55 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUR_HPP
#define BUR_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat{
    private:
        const std::string	_name;
        int					_grade;
		class TooHighException : public std::exception{
			const char * what () const throw ();
		};
		class TooLowException : public std::exception{
			const char * what () const throw ();
		};
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat&);
		Bureaucrat& operator=(const Bureaucrat&);
		const std::string	getName() const;
		int			getGrade() const;
		void		increment();
		void		decrement();
		void		signForm(Form&);
};


std::ostream &operator<<(std::ostream &stream, Bureaucrat &data);

#endif