#include <iostream>

bool is_leap_year(unsigned int Y) {
    // If the year is a century year, it is a leap year only if it is also divisible by 400
    if (Y % 100 == 0) {
        return Y % 400 == 0;
    }
    // If the year is not a century year, it is a leap year if it is divisible by 4
    return Y % 4 == 0;
}

int main() {
    unsigned int year;
    char response;

    do {
        std::cout << "Enter a year: ";
        std::cin >> year;

        if (is_leap_year(year)) {
            std::cout << year << " is a leap year." << std::endl;
        } else {
            std::cout << year << " is not a leap year." << std::endl;
        }

        std::cout << "Do you want to check another year? (y/n): ";
        std::cin >> response;
    } while (response == 'y' || response == 'Y');

    std::cout << "Okay,Goodbye!" << std::endl;
    return 0;
}