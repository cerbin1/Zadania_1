#include <iostream>
#include <vector>

int main() {
    int amountOfNumbersToDisplay;
    std::cin >> amountOfNumbersToDisplay;

    std::vector<int> vector;
    int number = 0;
    do {
        std::cin >> number;
        if (number >= 0) {
            vector.push_back(number);
        }
    } while (number >= 0);

    for (int i = amountOfNumbersToDisplay; i > 0; --i) {
        std::cout << vector[vector.size() - i ] << " ";
    }

    return 0;
}
