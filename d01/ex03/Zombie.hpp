
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
public:
	Zombie(std::string name = "Unknown");
	Zombie(std::string name, std::string type);
	~Zombie(void);
	void	setName(std::string name);
	void	setType(std::string type);
	void	announce(void);

private:
	std::string	_name;
	std::string _type;

};

#endif
