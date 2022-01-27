/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:32:21 by cowen             #+#    #+#             */
/*   Updated: 2022/01/24 17:08:31 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Phonebook{
	private:
		
		int index;
		Contact	contacts[8];
		
		void FirstName(std::string);
		void LastName(std::string);
		void NickName(std::string);
		void PhoneNumber(void);
		void DarkestSecret(std::string);
		void Index(void);
		
		void	viewContact(void);
		void	searchIndex(int index);
		void	searchFirstName(int index);
		void	searchLastName(int index);
		void	searchNickName(int index);
	public:
		Phonebook(void);
		~Phonebook(void);
		
		void AddContact(void);
		void SearchContact(void);
		
};