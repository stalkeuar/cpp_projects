#include <iostream>
#include <cmath>

bool Palindrom(int num) {
    int first_number = num, changed = 0;

    while (num > 0) {
        changed = changed * 10 + num % 10;
        num /= 10;
    }

    return first_number == changed;
}

int main() {
    std::cout << "Palindroms up to 1000: " << std::endl;
    
    for (int i = 1; i < 100; i++) {
        if (Palindrom(i)) {
            int square = i * i;
            if (Palindrom(square)) {
                std::cout << i << " " << square << std::endl;
            }
        }
    }
    
    return 0;
}