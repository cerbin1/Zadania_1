#include <iostream>

int main() {

    int width, height;
    std::cin >> width >> height;

    bool array[width][height];


    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < height; ++j) {
            std::cout << j << "," << i << " ";
            array[j][i] = false;
        }
        std::cout << std::endl;
    }

    bool done = true, czyTak = true;
    int x = width - 1, y = 0;
    for (int k = 0; k < width * height - 1 && done; ++k) {
        std::cout << "x: " << x << ", y: " << y << std::endl;
        int number;
        std::cin >> number;
        switch (number) {
            case 0: {
                x--;
                y += 2;
                if (x < 0 || x > width - 1 || y < 0 || y > height - 1) {
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
                x -= 2;
                y++;
                if (x < 0 || x > width - 1 || y < 0 || y > height - 1) {
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
                x -= 2;
                y--;
                if (x < 0 || x > width - 1 || y < 0 || y > height - 1) {
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
                x--;
                y -= 2;
                if (x < 0 || x > width - 1 || y < 0 || y > height - 1) {
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
                x++;
                y -= 2;
                if (x < 0 || x > width - 1 || y < 0 || y > height - 1) {
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
                x += 2;
                y--;
                if (x < 0 || x > width - 1 || y < 0 || y > height - 1) {
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
                x += 2;
                y++;
                if (x < 0 || x > width - 1 || y < 0 || y > height - 1) {
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
                x++;
                y += 2;
                if (x < 0 || x > width - 1 || y < 0 || y > height - 1) {
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
