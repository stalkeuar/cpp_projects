#include <iostream>
#include <iomanip>

int main()
{
	double R;

	std::cout << "Enter radius: " << std::endl;
	std::cin >> R;

	const double pi = 3.14;

	double length;
	double square;

	length = (pi * R * R);
	square = 2 * R * pi;

	std::cout << std::fixed << std::setprecision(2) << "Length: " << length << std::endl;
	std::cout << std::fixed << std::setprecision(2) << "Square: " << square << std::endl;

return 0;
}