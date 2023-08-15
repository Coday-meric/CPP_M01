#include <iostream>

int main() {
	std::string string= "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << std::endl;
	std::cout << "L’adresse de la string en mémoire : " << &string << std::endl;
	std::cout << "L’adresse stockée dans stringPTR : " << stringPTR << std::endl;
	std::cout << "L’adresse stockée dans stringREF : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "La valeur de la string : " << string << std::endl;
	std::cout << "La valeur pointée par stringPTR : " << *stringPTR << std::endl;
	std::cout << "La valeur pointée par stringREF : " << stringREF << std::endl;
	std::cout << std::endl;
	return 0;
}
