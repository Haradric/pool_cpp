
#include <iostream>
#include <fstream>

int		main(int argc, const char *argv[]) {

	if (argc != 4) {
		std::cout << "usage: ./replace file s1 s2" << std::endl;
		return (1);
	}

	std::ifstream	fin(argv[1]);
	if (!fin.is_open()) {
		std::cout << "error" << std::endl;
	}

	std::string tmp(argv[1]);
	for (size_t i = 0; i < tmp.length(); i++)
		tmp[i] = toupper(tmp[i]);
	tmp += ".replace";

	std::ofstream	fout(tmp);
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];

	std::string	buff;
	while (std::getline(fin, buff)) {
		size_t i = 0;
		size_t j = 0;
		while (((j = buff.find(s1, i)) != std::string::npos)) {
			buff.replace(j, s1.length(), s2);
			i = j + s2.length();
		}
		fout << buff << std::endl;
	}
	return (0);
}
