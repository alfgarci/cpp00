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

std::string	PhoneBook::_rightAlignedStr(std::string str) const
{
	std::string	newStr = "";
	int			len;

	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else 
	{
		len = str.length();
		while (len++ < 10)
			newStr += " ";
		newStr += str;
	}
	return (str);
}

std::string	PhoneBook::_askValidInput(std::string ask) const
{
	std::string entrade = "";
	
	std::cout << ask;
	std::cin >> entrade;
	while (entrade.empty())
	{
		std::cout << "Invalid, please enter a non empty input";
		std::cout << ask;
		std::cin >> entrade;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	return (entrade);
}

void	PhoneBook::addContact(void)
{
	static int	i;
	Contact		contact;

	_phoneBook[i % 8].setFirstName(_askValidInput("Enter fisrt name> "));
	_phoneBook[i % 8].setLastName(_askValidInput("Enter last name> "));
	_phoneBook[i % 8].setNickName(_askValidInput("Enter nick name> "));
	_phoneBook[i % 8].setPhone(_askValidInput("Enter phone"));
	_phoneBook[i % 8].setSecret(_askValidInput("Enter the darkest secret> "));
	_numContact = i % 8;
}

void	PhoneBook::showPhoneBook(void) const
{
	int	i;

	i = -1;
	while (++i < 45)
		std::cout << "-";
	std::cout << std::endl;
	i = -1;
	while (++i < _numContact)
	{
		std::cout << "|";
		std::cout << _rightAlignedStr(std::to_string(i + 1)) << "|";
		std::cout << _rightAlignedStr(_phoneBook[i].getFirstName()) << "|";
		std::cout << _rightAlignedStr(_phoneBook[i].getLastName()) << "|";
		std::cout << _rightAlignedStr(_phoneBook[i].getNickName())<< "|";
		std::cout << std::endl;
	}
	i = -1;
	while (++i < 45)
		std::cout << "-";
	std::cout << std::endl;
}

void	PhoneBook::searchContact(void) const
{
	int	entrade;

	showPhoneBook();
	std::cout << "Enter the index> ";
	std::cin >> entrade;
	std::cout << std::endl;
	while (entrade < 1 || entrade > _numContact)
	{
		std::cout << "Entrade out of range> ";
		std::cout << "Enter the index> ";
		std::cin >> entrade;
		std::cout << std::endl;
	}
	_phoneBook[entrade - 1].showContact();
}

void	PhoneBook::startPhoneBook(void)
{
	std::string entrade;

	std::cout << "--MY AWESOME PHONEBOOK--" << std::endl;
	std::cout << "Enter a command > ";
	std::cin >> entrade;
	std::cout << std::endl;
	while (entrade.compare("EXIT"))
	{
		if (entrade.compare("ADD") == 0)
			addContact();
		else if (entrade.compare("SEARCH") == 0)
			searchContact();
		std::cin >> entrade;
	}
}
