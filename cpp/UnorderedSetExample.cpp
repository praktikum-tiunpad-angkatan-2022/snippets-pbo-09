#include <iostream>  
#include <unordered_set>

int main() {
    std::unordered_set<int> mySet {123, 456, 789};
    for (auto item: mySet) {
        std::cout << item << " ";
    }
    std::cout << "\n";

    mySet.insert(123); // ga bisa
    for (auto item: mySet) {
        std::cout << item << " ";
    }
    std::cout << "\n";

    mySet.erase(456);
    mySet.erase(457);
    for (auto item: mySet) {
        std::cout << item << " ";
    }
    std::cout << "\n";

}