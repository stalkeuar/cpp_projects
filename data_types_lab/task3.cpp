#include <iostream>
#include <iomanip>

int main() 
{ 
	int number;

	std::cout << "Введіть число: ";
	std::cin >> number;

	if (number % 2 == 0) {
		std::cout << "Число " << number << " парне!" << std::endl;
	}
	else {
		std::cout << "Число " << number << " непарне!" << std::endl;
	}


	if (number % 8 == 0) {
		std::cout << "Число " << number << " ділиться на 8 націло? ТАК!" << std::endl;
	}
	else {
		std::cout << "Число " << number << " ділиться на 8 націло? НІ!" << std::endl;
	}


	if (number % 16 == 0) {
		std::cout << "Число " << number << " ділиться на 16 націло? ТАК!" << std::endl;
	}
	else {
		std::cout << "Число " << number << " ділиться на 16 націло? НІ!" << std::endl;
	}

	std::cout << "Число у вісімковому форматі: " << std::oct << number << std::endl;
	std::cout << "Число у шістнадцятковій формі: " << std::hex << std::uppercase << number << std::endl;

return 0;
}