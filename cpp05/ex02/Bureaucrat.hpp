/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:30:02 by cowen             #+#    #+#             */
/*   Updated: 2022/02/14 19:15:07 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUR_HPP
#define BUR_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class AForm;

class Bureaucrat{
    private:
        const std::string	_name;
        int					_grade;
		bool				_init;
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
		bool		getInit() const;
		void		increment();
		void		decrement();
		void		signForm(AForm&);
		void		executeForm(const AForm&);
};


std::ostream &operator<<(std::ostream &stream, Bureaucrat &data);

#endif