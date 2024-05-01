#include "PhoneBook.hpp"
#include "Prompt.hpp"

void	mainPrompt() {
	std::cout << "Please select an option ...\n";
	std::cout << "<-------   ADD     ------->\n";
	std::cout << "<-------   SEARCH  ------->\n";
	std::cout << "<-------   EXIT    ------->\n";
}

int	getOption(std::string line) {
	if (line == "ADD")
		return 1;
	else if (line == "SEARCH")
		return 2;
	else if (line == "EXIT")
		return 3;
	return 0;
}

void	execOption(int option, PhoneBook &phonebook)
{
	switch (option)
	{
		case 1:
			addPrompt(phonebook);
			break;
		case 2:
			searchPrompt(phonebook);
			break;
		case 3:
			exit(0);
			break;
		default:
			std::cout << "Invalid option !!\n";
	}

}

int main(void) {
	PhoneBook	phonebook;
	std::string	line;
	int			option;

	phonebook.last = -1;
	while (true)
	{
		mainPrompt();
		std::getline(std::cin, line);
		option = getOption(line);
		execOption(option, phonebook);
	}
	return (0);
}
