#include <iostream>

int main() {
    int n;
    std::cin >> n;
    std::cout << std::endl;
    int pascal[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                pascal[i][j] = 1;
            } else {
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
            std::cout << pascal[i][j] << " ";
        }
        std::cout << std::endl;
    }

return 0;
}