
#include "Phonebook.hpp"

void		Phonebook::setInfo(void) {
	
	std::string	input;

	std::cout << "first name" << std::endl << "> ";
	std::getline(std::cin, input);
	this->_fname = input;

	std::cout << "last name" << std::endl << "> ";
	std::getline(std::cin, input);
	this->_lname = input;

	std::cout << "nickname" << std::endl << "> ";
	std::getline(std::cin, input);
	this->_nname = input;

	std::cout << "login" << std::endl << "> ";
	std::getline(std::cin, input);
	this->_login = input;

	std::cout << "postal address" << std::endl << "> ";
	std::getline(std::cin, input);
	this->_paddress = input;

	std::cout << "email address" << std::endl << "> ";
	std::getline(std::cin, input);
	this->_eaddress = input;

	std::cout << "phone number" << std::endl << "> ";
	std::getline(std::cin, input);
	this->_phone = input;

	std::cout << "birthday date" << std::endl << "> ";
	std::getline(std::cin, input);
	this->_bdate = input;

	std::cout << "favorite meal" << std::endl << "> ";
	std::getline(std::cin, input);
	this->_meal = input;

	std::cout << "underwear color" << std::endl << "> ";
	std::getline(std::cin, input);
	this->_color = input;

	std::cout << "darkest secret" << std::endl << "> ";
	std::getline(std::cin, input);
	this->_secret = input;

	std::cout << "contact successfully created!" << std::endl;

	Phonebook::_count +=1;
}

void		Phonebook::printInfo(void) {
	std::cout << std::setw(16);
	std::cout << "first name:" << this->_fname << std::endl;
	std::cout << std::setw(16);
	std::cout << "last name:" << this->_lname << std::endl;
	std::cout << std::setw(16);
	std::cout << "nickname:" << this->_nname << std::endl;
	std::cout << std::setw(16);
	std::cout << "login:" << this->_login << std::endl;
	std::cout << std::setw(16);
	std::cout << "postal address:" << this->_paddress << std::endl;
	std::cout << std::setw(16);
	std::cout << "email address:" << this->_eaddress << std::endl;
	std::cout << std::setw(16);
	std::cout << "phone number:" << this->_phone << std::endl;
	std::cout << std::setw(16);
	std::cout << "birthday date:" << this->_bdate << std::endl;
	std::cout << std::setw(16);
	std::cout << "favorite meal:" << this->_meal << std::endl;
	std::cout << std::setw(16);
	std::cout << "underwear color:" << this->_color << std::endl;
	std::cout << std::setw(16);
	std::cout << "darkest secret:" << this->_secret << std::endl;
}

std::string	Phonebook::getFname(void) const {
	return (this->_fname);
}

std::string	Phonebook::getLname(void) const {
	return (this->_lname);
}

std::string	Phonebook::getNname(void) const {
	return (this->_nname);
}

int			Phonebook::getCount(void) {
	return (Phonebook::_count);
}

int			Phonebook::_count = 0;