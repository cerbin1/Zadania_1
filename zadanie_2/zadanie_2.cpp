#include <iostream>

int main() {

    int width, height;
    std::cin >> width >> height;

    bool array[width][height];


    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < height; ++j) {
            array[j][i] = false;
        }
    }

    bool done = true, czyTak = true;
    int x = 0, y = width - 1;
    array[x][y] = true;
    for (int k = 0; k < width * height - 1 && done; ++k) {
        for (int j = 0; j < width; ++j) {
            for (int i = 0; i < height; ++i) {
                std::cout << array[i][j] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        int number;
        std::cin >> number;
        switch (number) {
            case 0: {
                y--;
                x += 2;
                if (x < 0 || x > height - 1 || y < 0 || y > width - 1) {
                    done = false;
                    czyTak = false;
                    break;
                }
                if (array[x][y]) {
                    done = false;
                    czyTak = false;
                    break;
                }
                array[x][y] = true;
                break;
            }
            case 1: {
                y -= 2;
                x++;
                if (x < 0 || x > height - 1 || y < 0 || y > width - 1) {
                    done = false;
                    czyTak = false;
                    break;
                }
                if (array[x][y]) {
                    done = false;
                    czyTak = false;
                    break;
                }
                array[x][y] = true;
                break;
            }
            case 2: {
                y -= 2;
                x--;
                if (x < 0 || x > height - 1 || y < 0 || y > width - 1) {
                    done = false;
                    czyTak = false;
                    break;
                }
                if (array[x][y]) {
                    done = false;
                    czyTak = false;
                    break;
                }
                array[x][y] = true;
                break;
            }
            case 3: {
                y--;
                x -= 2;
                if (x < 0 || x > height - 1 || y < 0 || y > width - 1) {
                    done = false;
                    czyTak = false;
                    break;
                }
                if (array[x][y]) {
                    done = false;
                    czyTak = false;
                    break;
                }
                array[x][y] = true;
                break;
            }
            case 4: {
                y++;
                x -= 2;
                if (x < 0 || x > height - 1 || y < 0 || y > width - 1) {
                    done = false;
                    czyTak = false;
                    break;
                }
                if (array[x][y]) {
                    done = false;
                    czyTak = false;
                    break;
                }
                array[x][y] = true;
                break;
            }
            case 5: {
                y += 2;
                x--;
                if (x < 0 || x > height - 1 || y < 0 || y > width - 1) {
                    done = false;
                    czyTak = false;
                    break;
                }
                if (array[x][y]) {
                    done = false;
                    czyTak = false;
                    break;
                }
                array[x][y] = true;
                break;
            }
            case 6: {
                y += 2;
                x++;
                if (x < 0 || x > height - 1 || y < 0 || y > width - 1) {
                    done = false;
                    czyTak = false;
                    break;
                }
                if (array[x][y]) {
                    done = false;
                    czyTak = false;
                    break;
                }
                array[x][y] = true;
                break;
            }
            case 7: {
                y++;
                x += 2;
                if (x < 0 || x > height - 1 || y < 0 || y > width - 1) {
                    done = false;
                    czyTak = false;
                    break;
                }
                if (array[x][y]) {
                    done = false;
                    czyTak = false;
                    break;
                }
                array[x][y] = true;
                break;
            }
            default: {
                done = false;
            };
        }
    }

    std::cout << (czyTak ? "TAK" : "NIE");


    return 0;
}
