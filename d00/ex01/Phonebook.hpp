
#include <iostream>
#include <iomanip>

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class Phonebook
{
public:

	// Phonebook(void);
	// ~Phonebook(void);

	void		setInfo(void);
	void		printInfo(void);

	std::string	getFname(void) const;
	std::string	getLname(void) const;
	std::string	getNname(void) const;
	static int	getCount(void);

private:

	std::string _fname,
				_lname,
				_nname,
				_login,
				_paddress,
				_eaddress,
				_phone,
				_bdate,
				_meal,
				_color,
				_secret;

	static int	_count;
};

#endif