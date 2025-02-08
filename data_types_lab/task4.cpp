#include <iostream>
#include <iomanip>

int main()
{
	int parametr;
	float temp;

	std::cout << "Оберіть параметр (1 - Ц в Ф, 2 - Ф в Ц): ";
	std::cin >> parametr;

	if (parametr > 2) {
                std::cout << "Помилка! невірний параметр. " << std::endl;
                return 0;
        }
	else if (parametr == 1, 2) {	
		std::cout << "Введіть температуру: ";
	}

	std::cin >> temp;

	if (temp < -273.15) {
		std::cout << "Занадто холодно для підрахунку!" << std::endl;
		return 0;
	}


	if (parametr == 1) {
		std::cout << std::fixed << std::setprecision(2) << "Температура у фаренгейтах: " << ((temp * 9) / 5) + 32 << std::endl;
	} 
	else if (parametr == 2) {
		std::cout << std::fixed << std::setprecision(2) << "Температура в цельсіях: " << ((temp - 32) * 5) / 9 << std::endl;
	}

	return 0;
}