#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cerr << "Mauvais nombre d'argument !" << std::endl;
		return -1;
	}

	std::string search = argv[2];
	std::string replace = argv[3];
	std::string nameFile = argv[1];
	std::string nameFileOut = nameFile + ".replace";
	std::string data;

	std::ifstream file(nameFile);
	if (file)
	{
		std::stringstream buff;
		buff << file.rdbuf();
		file.close();
		data = buff.str();
	}
	else {
		std::cerr << "Impossible d'ouvrir/creer le fichier " << nameFile << " !" << std::endl;
		return -1;
	}

	size_t lens = std::size(search);
	std::size_t found = data.find(search);
	while (found != std::string::npos)
	{
		data = data.erase(found, lens);
		data = data.insert(found, replace);
		std::ofstream fileout(nameFileOut);
		if (fileout){
			fileout << data;
			fileout.close();
		}
		else {
			std::cerr << "Impossible d'ouvrir/creer le fichier " << nameFileOut << " !" << std::endl;
			return -1;
		}
		found = data.find(search);
	}
	return 0;
}
