#include <iostream>
#include <iomanip>
#include <cmath>

int main()

{
	float P;
	int T;
	float R;

	std::cout << "Enter money: ";
	std::cin >> P;
	std::cout << "Enter pozyka: ";
	std::cin >> T;
	std::cout << "Enter vidsotkova stavka: ";
	std::cin >> R;

	float I = (P * T * R) / 100;

	std::cout << std::fixed << std::setprecision(2) << "Prosti vidsotky (FLOAT): " << I << std::endl;
	std::cout << std::fixed << std::setprecision(2) << "Prosti vidsotky (INT): " << round(I) << std::endl;

return 0;
}