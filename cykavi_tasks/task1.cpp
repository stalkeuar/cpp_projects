#include <iostream>
#include <cmath>

int triyku(int n) {
	int count = 0;
	for (int a = 1; a <= n; ++a) {
		for (int b = a; b <= n; ++b) {
			for (int c = b; c <= n; ++c) {
				if (a * a + b * b == c * c) {
					std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
					++count;
				}
			}
		}
	}
	return count;
}

int main() {
    int n;
    std::cout << "n: ";
    std::cin >> n;

    int allTriyku = triyku(n);

    std::cout << allTriyku << std::endl;
    return 0;
}
