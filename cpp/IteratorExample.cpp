#include <list>
#include <unordered_set>
#include <set>
#include <iostream>

int main() {
    std::list<int> myList = {1, 2, 3, 4};
    std::list<int>::iterator it;
    
    std::cout << "Menggunakan iterator : " ;
    for (it = myList.begin(); it != myList.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    std::cout << "Menggunakan auto : ";
    for(auto item : myList) {
        std::cout << item << " ";
    }
    std::cout << "\n";
    
    std::cout << "Bisa digunakan untuk unordered set juga : ";
    std::unordered_set<int> myUnorderedSet {1, 4, 8, 2, 8, 3, 5, 9};
    for(auto item : myUnorderedSet) {
        std::cout << item << " ";
    }
    std::cout << "\n";

    std::cout << "Bisa digunakan untuk set juga : ";
    std::set<int> mySet {1, 4, 8, 2, 8, 3, 5, 9};
    for(auto item : mySet) {
        std::cout << item << " ";
    }
    std::cout << "\n";
}