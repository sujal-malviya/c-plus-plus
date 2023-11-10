#include <iostream>
#include <unordered_map>

int main() {
    // Hash Table (using std::unordered_map)
    std::unordered_map<std::string, int> hashMap;

    // Adding key-value pairs to the hash table
    hashMap["one"] = 1;
    hashMap["two"] = 2;
    hashMap["three"] = 3;

    // Accessing and printing elements of the hash table
    std::cout << "Hash Table Elements:" << std::endl;
    for (const auto& pair : hashMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
