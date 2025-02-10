#include <iostream>

void bulbashkoveSort(int arr[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int findMedian(int arr[], int N) {
    bulbashkoveSort(arr, N);  
    return arr[N / 2];   
}

int main() {
    int N;
    std::cout << "city amount: ";
    std::cin >> N;

    int x[N], y[N];

    std::cout << "(x y): " << std::endl;
    for (int i = 0; i < N; i++) {
        std::cin >> x[i] >> y[i];
    }

    int capitalX = findMedian(x, N);
    int capitalY = findMedian(y, N);

    std::cout << "capital: " << capitalX << " " << capitalY << std::endl;

    return 0;
}
