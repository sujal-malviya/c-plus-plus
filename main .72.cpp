#include <iostream>
#include <vector>

int main() {
    // Dynamic Array (using std::vector)
    std::vector<int> dynamicArray;

    // Adding elements to the dynamic array
    dynamicArray.push_back(1);
    dynamicArray.push_back(2);
    dynamicArray.push_back(3);

    // Accessing and printing elements of the dynamic array
    std::cout << "Dynamic Array Elements:" << std::endl;
    for (int i = 0; i < dynamicArray.size(); ++i) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
