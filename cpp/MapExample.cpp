#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> myMap;

    myMap["satu"] = 1;
    myMap["empat"] = 4;
    myMap["dua"] = 2;
    myMap["tiga"] = 3;

    for(auto item : myMap) {
        std::cout << item.first << " " << item.second << " ";
    }
    std::cout << "\n";

    for(auto item : myMap) {
        std::cout << item.first << " " << item.second << " ";
    }
    std::cout << "\n";

    myMap["dua"] = 6;
    myMap.erase("empat");
    for(auto item : myMap) {
        std::cout << item.first << " " << item.second << " ";
    }
    std::cout << "\n";
}