#include <iostream>

int main() {
    double sum = 0.0;
    for (int i = 1; i <= 95; i += 2) {
        sum += (double)i / (i + 2);
    }
    std::cout << "The sum of the series is: " << sum << std::endl;
    return 0;
}