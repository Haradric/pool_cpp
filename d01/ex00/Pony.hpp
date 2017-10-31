
#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony {
public:

	std::string	const	name;

	Pony(std::string name);
	~Pony(void);

void		setWeight(size_t weight);
size_t		getWeight(void) const;
void		setColor(std::string color);
std::string	getColor(void) const;

private:
	size_t				_weight;
	std::string			_color;
};

#endif