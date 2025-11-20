#include <iostream>
#include "outputGreetings.h"

int outputGreetings() {
    char name[15];
    std::cin >> name;
    std::cout << "Hello, " << name << std::endl;

    return 0;
}