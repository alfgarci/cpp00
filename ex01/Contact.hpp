#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	private:
		std::string	_fisrt_name;
		std::string	_last_name;
		std::string	_nick_name;
		std::string	_phone;
		std::string	_secret;
	public:
		std::string	get_first_name(void) const;
		std::string	get_last_name(void) const;
		std::string	get_nick_name(void) const;
		std::string	get_phone(void) const;
		std::string	get_secret(void) const;
		void		set_first_name(void) const;
		void		set_last_name(void) const;
		void		set_nick_name(void) const;
		void		set_phone(void) const;
		void		set_secret(void) const;
};

#endif