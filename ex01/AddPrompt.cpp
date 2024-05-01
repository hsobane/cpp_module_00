#include "Prompt.hpp"

static std::string	firstNamePrompt() {
	std::string	line;

	line = "";
	while (line.empty())
	{
		std::cout << "Entre first name : ";
		std::getline(std::cin, line);
	}
	return line;
}

static std::string	lastNamePrompt() {
	std::string	line;

	line = "";
	while (line.empty())
	{
		std::cout << "Entre last name : ";
		std::getline(std::cin, line);
	}
	return line;
}

static std::string	nickNamePrompt() {
	std::string	line;

	line = "";
	while (line.empty())
	{
		std::cout << "Entre nickname : ";
		std::getline(std::cin, line);
	}
	return line;
}

static std::string	phoneNumberPrompt() {
	std::string	line;

	line = "";
	while (line.empty())
	{
		std::cout << "Entre phone number : ";
		std::getline(std::cin, line);
	}
	return line;
}

static std::string	darkestSecretPrompt() {
	std::string	line;

	line = "";
	while (line.empty())
	{
		std::cout << "Entre darkest secret : ";
		std::getline(std::cin, line);
	}
	return line;
}

void	addPrompt(PhoneBook &phonebook) {
	Contact		contact;

	contact.setFirstName(firstNamePrompt());
	contact.setLastName(lastNamePrompt());
	contact.setNickname(nickNamePrompt());
	contact.setPhoneNumber(phoneNumberPrompt());
	contact.setDarkestSecret(darkestSecretPrompt());
	phonebook.add(contact);
}
