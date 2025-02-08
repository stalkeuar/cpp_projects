#include <iostream>

void eratosphen_resheto(int n) {
    bool* eratosphen = new bool[n + 1];

    for (int i = 0; i <= n; i++) {
        eratosphen[i] = true;
    }

    eratosphen[0] = eratosphen[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (eratosphen[i]) {
            for (int j = i * i; j <= n; j += i) {
                eratosphen[j] = false; 
            }
        }
    }

    std::cout << n << ":" << std::endl;
    for (int i = 2; i <= n; i++) {
        if (eratosphen[i]) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    delete[] eratosphen;
}

int main(){
    int n = 1000;
    eratosphen_resheto(n);
    return 0;
}