#include <iostream>
#include <iomanip>

int main()
{ 
	char symvol;

	std::cout << "Enter symvol: ";
	std::cin >> symvol;
	std::cout << "Symvol: " << symvol << std::endl;
	std::cout << "ASCII in 10: " << (int)symvol << std::endl;
	std::cout << "ASCII in 16: 0x" << std::hex << std::uppercase << (int)symvol << std::endl;

return 0;
}