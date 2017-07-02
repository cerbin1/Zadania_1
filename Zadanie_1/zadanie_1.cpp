#include <iostream>

int main() {
    int dimension;
    std::cin >> dimension;
    int array[dimension][dimension];

    int indexOfRowWithMostOnesCount = 0;
    int previousMaxOnesCount = 0;
    for (int i = 0; i < dimension; ++i) {
        for (int j = 0; j < dimension; ++j) {
            std::cin >> array[j][i];
        }
        int onesCount = 0;

        for (int j = 0; j < dimension; ++j) {
            if (array[j][i] == 1) {
                onesCount++;
            }
        }
        if (onesCount > previousMaxOnesCount) {
            indexOfRowWithMostOnesCount = i;
            previousMaxOnesCount = onesCount;
        }
    }
    std::cout << indexOfRowWithMostOnesCount << std::endl;

    return 0;
}
