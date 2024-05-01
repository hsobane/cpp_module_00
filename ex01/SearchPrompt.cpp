#include "Prompt.hpp"

static void	parseOutput(std::string str) {
	std::string			truncated;
    std::stringstream	ss;

    if (str.length() > 10) {
        truncated = str.substr(0, 9) + ".";
		std::cout << truncated;
        return ;
    }
    ss << std::setw(10) << std::right << str;
	std::cout << ss.str();
}

static bool	indexOutRange(std::string str, int range) {
	char		*endptr;
	int long	result;

	result = std::strtol(str.c_str(), &endptr, 10);
	if (*endptr != '\0')
		return true;
	else if (result > INT_MAX || result < INT_MIN)
		return true;
	else if (result > range || result > 7 || result < 0)
		return true;
	return false;
}

static int	indexPrompt(PhoneBook &phonebook) {
	std::string	line;

	line = "x";
	while (true)
	{
		std::cout << "Please entre the index of the entry to display : ";
		std::getline(std::cin, line);
		if (line.find_first_not_of("0123456789") != std::string::npos)
			std::cout << "Invalid index ...\n";
		else if (indexOutRange(line, phonebook.last))
			std::cout << "Index out of range ...\n";
		else
			break ;
	}
	return (std::strtol(line.c_str(), NULL, 10));
}

void	searchPrompt(PhoneBook &phonebook) {
	int					index;
	std::stringstream	ss;

	if (phonebook.last < 0)
	{
		std::cout << "Contact list is empty !!\n";
		return ;
	}
	for (int i = 0; i <= phonebook.last && i < 8; i++)
	{
		std::cout << "|";
		ss << i;
		parseOutput(ss.str());
		ss.str(std::string());
		std::cout << "|";
		parseOutput(phonebook.contact[i].getFirstName());
		std::cout << "|";
		parseOutput(phonebook.contact[i].getLastName());
		std::cout << "|";
		parseOutput(phonebook.contact[i].getNickname());
		std::cout << "|\n";
	}
	index = indexPrompt(phonebook);
	phonebook.search(index);
}
