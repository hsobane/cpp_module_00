#ifndef		PHONEBOOK_HPP
# define	PHONEBOOK_HPP
# include	<iostream>
# include	<string>
# include	"Contact.hpp"

class	PhoneBook {
	public:
		int		last;
		Contact contact[8];

		void add(Contact contact);
		void search(int index);
};

#endif