#include "Contact.hpp"

std::string	Contact::get_first_name(void) const
{
	return (this->_fisrt_name);
}

std::string	Contact::get_last_name(void) const
{
	return (this->_last_name);
}

std::string	Contact::get_nick_name(void) const
{
	return (this->_nick_name);
}

std::string	Contact::get_phone(void) const
{
	return (this->_phone);
}

std::string	Contact::get_secret(void) const
{
	return (this->_secret);
}

