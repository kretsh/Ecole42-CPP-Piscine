/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:21:44 by cowen             #+#    #+#             */
/*   Updated: 2022/02/15 15:28:21 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOT
#define ROBOT

#include "Form.hpp"

class RobotomyRequestForm : public AForm{
	private:
		std::string	_target;
	protected:
		void subExecute(void) const;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm&);
		RobotomyRequestForm& operator=(const RobotomyRequestForm&);

};
#endif