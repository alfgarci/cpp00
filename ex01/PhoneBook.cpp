# include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_numContact = 0;
}

int	PhoneBook::getNumContact(void) const
{
	return (this->_numContact);
}

void	PhoneBook::setNumContact(int numContact)
{
	this->_numContact = numContact;
}

void	PhoneBook::addContact(void) const
{
	while ()
}

void	PhoneBook::startPhoneBook(void) const
{
	std::string entrade;

	std::cout << "--MY AWESOME PHONEBOOK--" << std::endl;
	std::cout << "Enter a command > " << std::endl;
	std::cin >> entrade;
	while (entrade.compare("EXIT"))
	{
		if (entrade.compare("ADD"))
			addContact();
		else if (entrade.compare("SEARCH"))
			searchContact();
		std::cin >> entrade;
	}
}
