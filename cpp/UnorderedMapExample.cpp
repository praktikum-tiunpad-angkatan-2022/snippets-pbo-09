#include <iostream> 
#include <unordered_map> 
#include <string>

int main() {
    std::unordered_map<std::string, int> myMap; 

    myMap["satu"] = 1;
    myMap["empat"] = 4;
    myMap["dua"] = 2;
    myMap["tiga"] = 3;

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