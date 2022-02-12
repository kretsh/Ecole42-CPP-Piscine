/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:06:48 by cowen             #+#    #+#             */
/*   Updated: 2022/02/12 17:02:38 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeSign;
		const int			_gradeExec;
	class GradeTooHighException : public std::exception{
		const char * what () const throw ();
	};
	class GradeTooLowException : public std::exception{
		const char * what () const throw ();
	};
	public:
		Form();
		Form(const Form&);
		~Form();
		Form& operator=(const Form&);
		std::string getName() const;
		bool		getSigned() const;
		int			getGradeSign() const;
		int			getGradeExec() const;
		bool		beSigned(const Bureaucrat&);
};

std::ostream &operator<<(std::ostream &stream, Form &data);

#endif