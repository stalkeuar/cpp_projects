#include <iostream>
#include <iomanip>

int main()
{
	float mark;

	std::cout << "Введіть кількість балів: ";
	std::cin >> mark;

	if (mark >= 0.1 && mark <= 4.4) {
		std::cout << "-незадовільна оцінка (2,0)" <<  std::endl;
		return 0;
	} 
	else if (mark >= 4.5 && mark <= 5.2) {
		std::cout << "-задовільний (3,0)" << std::endl;
	}
	else if (mark >= 5.3 && mark <= 6.2) {
                std::cout << "-оцінка вище задовільного (3,5)" << std::endl;
        }
	else if (mark >= 6.3 && mark <= 7.2) {
                std::cout << "-хороша оцінка (4,0)" << std::endl;
        }
	else if (mark >= 7.3 && mark <= 8.2) {
                std::cout << "-оцінка вище добре (4,5)" << std::endl;
        }
	else if (mark >= 8.3 && mark <= 9.0) {
                std::cout << "-дуже добре (5,0)" << std::endl;
        }
	else  {
		std::cout << "Неправильна кількість пунктів!" << std::endl;
		return 0;
	}


return 0;
}