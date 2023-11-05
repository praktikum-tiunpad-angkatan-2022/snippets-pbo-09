#include <iostream>  
#include <set>

int main() {
    std::set<int> mySet {1, 4, 3, 2, 5, 9, 4, 2};
    for (auto item: mySet) {
        std::cout << item << " ";
    }  
    std::cout << "\n";

    mySet.insert(6);
    for (auto item: mySet) {
        std::cout << item << " ";
    }  
    std::cout << "\n";

    mySet.erase(9);
    for (auto item: mySet) {
        std::cout << item << " ";
    }  
    std::cout << "\n";
}