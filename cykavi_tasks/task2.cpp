#include <iostream>

int main() {

    int n;
    std::cin >> n;

    int** pasc_triangle  = new int*[n];
    for (int i = 0; i < n; ++i) {
        pasc_triangle[i] = new int[i + 1];
    }

    for (int i = 0; i < n; ++i) {
        pasc_triangle[i][0] = pasc_triangle[i][i] = 1;
        for (int j = 1; j < i; ++j) {
            pasc_triangle[i][j] = pasc_triangle[i - 1][j - 1] + pasc_triangle[i - 1][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << pasc_triangle[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; ++i) {
        delete[] pasc_triangle[i];
    }
    delete[] pasc_triangle; 

    return 0;
}