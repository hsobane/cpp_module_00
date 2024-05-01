#include "PhoneBook.hpp"

void PhoneBook::add(Contact contact) {
	int	last;

	last = (this->last + 1) % 8;
	this->contact[last].setFirstName(contact.getFirstName());
	this->contact[last].setLastName(contact.getLastName());
	this->contact[last].setNickname(contact.getNickname());
	this->contact[last].setPhoneNumber(contact.getPhoneNumber());
	this->contact[last].setDarkestSecret(contact.getDarkestSecret());
	if (this->last >= 8888)
		this->last -= 8880;
	this->last++;
}

void PhoneBook::search(int index) {
	if (index >= 8 || index < 0) {
		std::cout << "Index out of range!!" << std::endl;
		return ;
	}
	std::cout << "First name :     " << this->contact[index].getFirstName() << "\n";
	std::cout << "Last name :      " << this->contact[index].getLastName() << "\n";
	std::cout << "Nickname :       " << this->contact[index].getNickname() << "\n";
	std::cout << "Phone number :   " << this->contact[index].getPhoneNumber() << "\n";
	std::cout << "Drakest secret : " << this->contact[index].getDarkestSecret() << std::endl;
}
