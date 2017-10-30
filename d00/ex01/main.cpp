
#include <iostream>
#include <iomanip>
#include "Phonebook.hpp"
#define SIZE 8

void	check_input(void)
{
	if (std::cin.eof()) {
		std::cout << "OH SCHI!" << std::endl;
		exit(1);
	}
}

void	print_formated(std::string str)
{
	if (str.length() > 10)
		str = str.substr(0, 9) + ".";
	else
		std::cout << std::setw(10);
	std::cout << str;
}

void	preview(int index, Phonebook entry)
{
	std::cout << "|";

	std::cout << std::setw(10);
	std::cout << index;
	std::cout << "|";

	print_formated(entry.getFname());
	std::cout << "|";

	print_formated(entry.getLname());
	std::cout << "|";

	print_formated(entry.getNname());
	std::cout << "|" << std::endl;
}

int		main(void)
{
	std::string	input;
	Phonebook	book[SIZE];
	std::string border(45, '-');
	int 		index;

	while (true)
	{
		std::cout << "# ";
		std::getline(std::cin, input);
		check_input();
		if (input == "ADD") {
			if (Phonebook::getCount() == 8)
				std::cout << "your phonebook is full!" << std::endl;
			else
				book[Phonebook::getCount()].setInfo();
		}
		else if (input == "SEARCH") {
			std::cout << border << std::endl;
			for (int i = 0; i < Phonebook::getCount(); i++) {
					preview(i + 1, book[i]);
					std::cout << border << std::endl;
				}
			std::cout << "choose contact to display" << std::endl << "> ";
			std::getline(std::cin, input);
			index = atoi(input.c_str());
			if (index > 0 && index <= Phonebook::getCount())
				book[index - 1].printInfo();
			else
				std::cout << "error" << std::endl;
		}
		else if (input == "EXIT")
			break;
		else
			std::cout << "unknown command" << std::endl;
	}
}
