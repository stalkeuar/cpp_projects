#include <iostream>

bool proste(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void prosti_twins(int n) {
    std::cout << "between " << n << " i " << 2 * n << ":" << std::endl;
    
    for (int x = n; x <= 2 * n - 2; x++) {  
        if (proste(x) && proste(x + 2)) { 
            std::cout << x << " та " << x + 2 << std::endl;
        }
    }
}

int main() {
    int n;
    std::cout << "n: ";
    std::cin >> n;

    if (n < 2) {
        std::cout << "wrong number! >=2 " << std::endl;
    } else {
        prosti_twins(n);
    }

    return 0;
}