#include <iostream>

void mnozhnuky(int n) {
    int* prosti_mnozhnuky = new int[n]; 
    int count = 0; 

    std::cout << n << " = ";

    while (n % 2 == 0) {
        prosti_mnozhnuky[count++] = 2;
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            prosti_mnozhnuky[count++] = i;
            n /= i;
        }
    }

    if (n > 1) {
        prosti_mnozhnuky[count++] = n;
    }

    for (int i = 0; i < count; i++) {
        if (i > 0) std::cout << ", ";
        std::cout << prosti_mnozhnuky[i];
    }
    
    std::cout << std::endl;
    
    delete[] prosti_mnozhnuky; 
}

int main() {
    int n;
    std::cout << "n: ";
    std::cin >> n;

    if (n <= 1) {
        std::cout << "wrong number (n<=1)" << std::endl;
    } else {
        mnozhnuky(n);
    }

    return 0;
}