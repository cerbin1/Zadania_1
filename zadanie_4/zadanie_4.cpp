#include <iostream>
#include <algorithm>
#include <vector>


bool isAlreadyInArray(int number);

int getSum(int n);

std::vector<int> vector;

int main() {
    int n;
    std::cin >> n;
    if (n < 1) return 0;
    int array[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int number;
            std::cin >> number;
            if (number < 1) return 0;
            if (isAlreadyInArray(number)) {
                std::cout << -1;
                return 0;
            }
            vector.push_back(number);
            array[j][i] = number;
        }
    }

    int sum = getSum(n);

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

    std::cout << sum << std::endl;

    return 0;
}

int getSum(int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += vector[i];
    }
    return sum;
}

bool isAlreadyInArray(int number) {
    for (int i = 0; i < vector.size(); ++i) {
        if (vector[i] == number) {
            return true;
        }
    }
    return false;
}
