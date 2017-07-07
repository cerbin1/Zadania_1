#include <iostream>
#include <algorithm>
#include <vector>


int main() {
    std::vector<int> vector;

    int n;
    std::cin >> n;
    if (n < 1) {
        return 0;
    }
    int array[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int number;
            std::cin >> number;
            if (number < 1) {
                std::cout << -1;
                return 0;
            }

            for (int k = 0; k < vector.size(); ++k) {
                if (vector[k] == number) {
                    std::cout << -1;
                    return 0;
                }
                if (vector[k] > n * n) {
                    std::cout << -1;
                    return 0;
                }
            }
            vector.push_back(number);
            array[j][i] = number;
        }
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += array[i][0];
    }

    for (int i = 0; i < n; ++i) {
        int countedSum = 0;
        for (int j = 0; j < n; ++j) {
            countedSum += array[j][i];
        }
        if (sum != countedSum) {
            std::cout << -1;
            return 0;
        }
    }

    for (int i = 0; i < n; ++i) {
        int countedSum = 0;
        for (int j = 0; j < n; ++j) {
            countedSum += array[i][j];
        }
        if (sum != countedSum) {
            std::cout << -1;
            return 0;
        }
    }

    std::cout << std::endl << sum << std::endl;

    return 0;
}
