#include <iostream>

std::string passwordRandom(int passwordLength) {
	std::srand(time(0));
	
	std::string allCharacters = "`~!@#$%^&*()_-+={}[]'|.,<>;:?0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int allCharactersLength = allCharacters.size();
	
	std::string result;

	for(int i = 0; i < passwordLength; i++){
		int index = std::rand() % allCharactersLength;
		result += allCharacters[index];
	}

	return result;
}

void menu() {
	std::cout << "\033[1;33m##### Password Generator #####\033[0m\n";
	std::cout << "1. 8 Characters \n";
	std::cout << "2. 16 Characters \n";
	std::cout << "Select \033[1;33m(1/2) : \033[0m";
}

int main() {
	int userInput;
	int passwordLength;
	menu();
	
	std::cin >> userInput;
	
	if(userInput == 1) {
		passwordLength = 8;
		std::cout << "\nYour Password = " << "\033[1;037m" << passwordRandom(passwordLength) << "\033[0;m\n";
	} else if (userInput == 2) {
		passwordLength = 16;
		std::cout << "\nYour Password = " << "\033[1;037m" << passwordRandom(passwordLength) << "\033[0;m\n";
	} else {
		std::cout << "\nOops, Not in Menu!\n";
	}

	return 0;
}
