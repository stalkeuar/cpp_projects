#include <iostream>

void charivniyVector(int arr[], int pos, int N, int start, int sum, int product) {
    if (pos == N) {
        if (sum == product) {
            for (int i = 0; i < N; i++) {
                std::cout << arr[i] << " ";
            }
            std::cout << std::endl;
        }
        return;
    }

    for (int i = start; i <= sum + 1; i++) { 
        arr[pos] = i;
        charivniyVector(arr, pos + 1, N, i, sum + i, product * i);
    }
}

int main() {
    int N;
    std::cin >> N;

    int arr[N]; 
    charivniyVector(arr, 0, N, 1, 0, 1);

    return 0;
}