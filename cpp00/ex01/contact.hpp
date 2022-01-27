/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:35:43 by cowen             #+#    #+#             */
/*   Updated: 2022/01/24 17:23:49 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


class Contact{
	
	private:
		int			_index;
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		long double _phonenumber;
		std::string _secret;
		bool		_init;
	public:
		Contact(void);
		~Contact(void);
		void setIndex(int index);
		void setFirstName(std::string FirstName);
		void setLastName(std::string LastName);
		void setNickName(std::string NickName);
		void setPhoneNumber(long double Phone);
		void setSecret(std::string Secret);
		int			getIndex(void);
		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickName(void);
		long double getPhoneNumber(void);
		std::string getSecret(void);
		bool		getInit(void);
};
