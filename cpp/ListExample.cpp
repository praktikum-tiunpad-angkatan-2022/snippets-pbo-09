#include <iostream>
#include <list>

void printList(std::list<int> intList) {
    // Iterator untuk objek list
    std::list<int>::iterator it;

    std:: cout << "Anggota List : ";
    for(it = intList.begin(); it != intList.end(); it++) {
        std::cout << *it << " ";
    }
    std:: cout << "\n";
}

int main() {
    std::list<int> myList = {10, 20, 30, 40};
    printList(myList);

    std::cout << "Anggota awal : " << myList.front() << "\n";
    std::cout << "Anggota akhir : " << myList.back() << "\n";

    myList.push_front(0);
    myList.pop_back();

    std::cout << "Anggota awal : " << myList.front() << "\n";
    std::cout << "Anggota akhir : " << myList.back() << "\n";

    myList.reverse();
    printList(myList);
    myList.sort();
    printList(myList);
}
