#include <iostream>

char* outputGreetings() {
    char name[15];
    std::cin >> name;
    std::cout << "Hello, " << name << std::endl;

    return name;
}