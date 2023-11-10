#include <iostream>

int main() {
    // Declaration and initialization of a 2D array
    const int rows = 3;
    const int columns = 4;
    int twoDArray[rows][columns] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Accessing and printing elements of the 2D array
    std::cout << "2D Array Elements:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            std::cout << twoDArray[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
