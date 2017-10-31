 
 #include "Pony.hpp"

void	ponyOnTheHeap() {
	Pony	*misha = new Pony("Misha");

	misha->setWeight(200);
	std::cout << misha->name << " is cool!" << std::endl;
	delete misha;
}

void	ponyOnTheStack() {
	Pony	valera = Pony("Valera");

	valera.setWeight(300);
	std::cout << valera.name << " is so fat!" << std::endl;
}

int		main(void) {
	ponyOnTheHeap();
	ponyOnTheStack();

	return (0);
}