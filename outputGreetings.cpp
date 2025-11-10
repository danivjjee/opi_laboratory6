#include <iostream>
#include "outputGreetings.h"

void outputGreetings() {
    char name[15];
    std::cin >> name;
    std::cout << "Hello, " << name << std::endl;
}