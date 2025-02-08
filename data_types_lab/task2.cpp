#include <iostream>
#include <iomanip>

int main()
{
	double number1;
	double number2;

	std::cout << "Enter 1st number: ";
	std::cin >> number1;
	std::cout << "Enter 2nd number: ";
	std::cin >> number2;
	
	std::cout << std::fixed << std::setprecision(12) << "Сума: " << number1 + number2 << std::endl;
	std::cout << std::fixed << std::setprecision(12) << "Різниця: " << number1 - number2 << std::endl;
	std::cout << std::fixed << std::setprecision(12) << "Добуток: " << number1 * number2 << std::endl;


	if (number2 != 0) {
		std::cout << std::fixed << std::setprecision(12) << "Частка: " << number1 / number2 << std::endl;
	} 
	else {
		std::cout << "Частка: знаменник не може дорівнювати 0." << std::endl;
}
return 0;
}