#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>

class PhoneBook
{
	private:
		Contact	_phoneBook[8];
		int		_numContact;
	public:
		PhoneBook();
		int		getNumContact(void) const;
		void	setNumContact(int _new_num);
		void	addContact(void) const;
		void	searchContact(void) const;
		void	startPhoneBook(void) const;
};

#endif
