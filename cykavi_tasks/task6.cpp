#include <iostream>


int main() {
    int n;
    std::cout << "n: ";
    std::cin >> n;

    if (n < 0 || n > 1000) {
        std::cout << "wrong number! <0 || >1000 " << std::endl;
        return 0;
    }

    std::cout << n << ": ";

    if (n == 0) {
        std::cout << "нуль" << std::endl;
        return 0;
    }
    if (n == 1000) {
        std::cout << "тисяча" << std::endl;
        return 0;
    }

    const char* singlenumbers[] = {"", "один", "два", "три", "чотири", "п'ять", "шість", "сім", "вісім", "дев'ять"};
    const char* teennumbers[] = {"десять", "одинадцять", "дванадцять", "тринадцять", "чотирнадцять", "п'ятнадцять",
                           "шістнадцять", "сімнадцять", "вісімнадцять", "дев'ятнадцять"};
    const char* tens[] = {"", "десять", "двадцять", "тридцять", "сорок", "п'ятдесят", "шістдесят",
                          "сімдесят", "вісімдесят", "дев'яносто"};
    const char* hundreds[] = {"", "сто", "двісті", "триста", "чотириста", "п'ятсот", "шістсот",
                              "сімсот", "вісімсот", "дев'ятсот"};

    bool space = true;

    if (n / 100 > 0) {
        std::cout << hundreds[n / 100];
        space = false;
    }

    int lastTwoDigits = n % 100;
    if (lastTwoDigits >= 10 && lastTwoDigits < 20) {
        if (!space) std::cout << " ";
        std::cout << teennumbers[lastTwoDigits - 10];
    } else {
        if (lastTwoDigits / 10 > 0) {
            if (!space) std::cout << " ";
            std::cout << tens[lastTwoDigits / 10];
            space = false;
        }
        if (lastTwoDigits % 10 > 0) {
            if (!space) std::cout << " ";
            std::cout << singlenumbers[lastTwoDigits % 10];
        }
    }

    std::cout << std::endl;
    return 0;
}