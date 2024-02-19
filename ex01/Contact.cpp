#include "Contact.hpp"

std::string	Contact::getFirstName(void) const
{
	return (this->_fisrtName);
}

std::string	Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string	Contact::getNickName(void) const
{
	return (this->_nickName);
}

std::string	Contact::getPhone(void) const
{
	return (this->_phone);
}

std::string	Contact::getSecret(void) const
{
	return (this->_secret);
}

void	Contact::setFirstName(std::string fisrtName)
{
	this->_fisrtName = fisrtName;
}

void	Contact::setLastName(std::string lastName)
{
	this->_lastName	= lastName;
}

void	Contact::setNickName(std::string nickName)
{
	this->_nickName = nickName;
}

void	Contact::setPhone(std::string phone)
{
	this->_phone = phone;
}

void	Contact::setSecret(std::string secret)
{
	this->_secret = secret;
}