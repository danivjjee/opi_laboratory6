#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    unsigned int number;
    cout << "Введіть число: " << endl;
    cin >> number;

    unsigned int firstDigit = number / 100;
    unsigned int secondDigit = (number - (100 * firstDigit)) / 10;
    unsigned int thirdDigit = number % 10;

    bool isTrue = firstDigit < secondDigit && secondDigit < thirdDigit;

    cout << boolalpha << isTrue << endl;
    cout << (isTrue ? true : false) << noboolalpha << endl;

    return 0;
}