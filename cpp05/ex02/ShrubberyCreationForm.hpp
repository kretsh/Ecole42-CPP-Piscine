/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:46:56 by cowen             #+#    #+#             */
/*   Updated: 2022/02/14 18:29:45 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm{
	private:
		std::string	_target;
	protected:
		void subExecute(void) const;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm&);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);

		
};