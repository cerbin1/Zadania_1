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

    std::vector<int> iterator(vector.end() - amountOfNumbersToDisplay, vector.end());
    for (const auto &element: iterator) {
        std::cout << element << " ";
    }

    return 0;
}
