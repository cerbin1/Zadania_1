#include <iostream>

int main() {

    int width, height;
    std::cin >> width >> height;
    if (width < 1 || width > 30 || height < 1 || height > 30) return 0;

    bool array[width][height];

    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < height; ++j) {
            array[j][i] = false;
        }
    }

    bool done = true, isBoardPassedByHorse = true;
    int x = 0, y = width - 1;
    array[x][y] = true;
    for (int k = 0; k < width * height - 1 && done; ++k) {
        int number;
        std::cin >> number;
        switch (number) {
            case 0: {
                y--;
                x += 2;
                if (x < 0 || x > height - 1 || y < 0 || y > width - 1) {
                    done = false;
                    isBoardPassedByHorse = false;
                    break;
                }
                if (array[x][y]) {
                    done = false;
                    isBoardPassedByHorse = false;
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
                    isBoardPassedByHorse = false;
                    break;
                }
                if (array[x][y]) {
                    done = false;
                    isBoardPassedByHorse = false;
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
                    isBoardPassedByHorse = false;
                    break;
                }
                if (array[x][y]) {
                    done = false;
                    isBoardPassedByHorse = false;
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
                    isBoardPassedByHorse = false;
                    break;
                }
                if (array[x][y]) {
                    done = false;
                    isBoardPassedByHorse = false;
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
                    isBoardPassedByHorse = false;
                    break;
                }
                if (array[x][y]) {
                    done = false;
                    isBoardPassedByHorse = false;
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
                    isBoardPassedByHorse = false;
                    break;
                }
                if (array[x][y]) {
                    done = false;
                    isBoardPassedByHorse = false;
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
                    isBoardPassedByHorse = false;
                    break;
                }
                if (array[x][y]) {
                    done = false;
                    isBoardPassedByHorse = false;
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
                    isBoardPassedByHorse = false;
                    break;
                }
                if (array[x][y]) {
                    done = false;
                    isBoardPassedByHorse = false;
                    break;
                }
                array[x][y] = true;
                break;
            }
            default: {
                done = false;
                isBoardPassedByHorse = false;
            };
        }
    }

    std::cout << (isBoardPassedByHorse ? "TAK" : "NIE");
    std::cout << (done ? "TAK" : "NIE");


    return 0;
}
