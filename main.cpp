#include <iostream>
#include <iomanip>
#include <locale.h>
#include <windows.h>
#include "outputGreetings.h"

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "Hello world" << endl;
    unsigned int number;
    cout << "Введіть число: " << endl;
    cin >> number;

    unsigned int firstDigit = number / 100;
    unsigned int secondDigit = (number - (100 * firstDigit)) / 10;
    unsigned int thirdDigit = number % 10;

    bool isTrue = firstDigit < secondDigit && secondDigit < thirdDigit;

    cout << boolalpha << isTrue << endl;
    cout << (isTrue ? true : false) << noboolalpha << endl;

    outputGreetings();

    return 0;
}