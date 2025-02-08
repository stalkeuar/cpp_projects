#include <iostream>

int main()
{
	int A;
	int B;
	int C;
	
	std::cin >> A;
	std::cin >> B;
	std::cin >> C;

	int volume = A * B * C;
	int square = 2 * (A * B + B * C + A * C);

	std::cout << "Volume: " << volume << std::endl;
	std::cout << "Square: " << square << std::endl;

return 0;

}