/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:06:48 by cowen             #+#    #+#             */
/*   Updated: 2022/02/14 18:55:42 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"


class Bureaucrat;

class AForm{
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
	class FormIsNotSignedException : public std::exception{
		const char * what () const throw ();
	};
	protected:
		virtual void subExecute(void) const = 0;
	public:
		AForm();
		AForm(const AForm&);
		AForm(const std::string, const int, const int);
		virtual ~AForm();
		AForm& operator=(const AForm&);
		std::string getName() const;
		bool		getSigned() const;
		int			getGradeSign() const;
		int			getGradeExec() const;
		bool		beSigned(const Bureaucrat&);
		void execute(Bureaucrat const & executor) const;
		
};

std::ostream &operator<<(std::ostream &stream, AForm &data);

#endif