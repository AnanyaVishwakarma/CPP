#include <iostream>

int main() {
    std::cout << "Enter the temperature in fahrenheit: \n";
    double fahrenheit;
    std::cin>> fahrenheit;

    std::cout << "The temperature in celsius is: \n";
    double celsius = (fahrenheit - 32) / 1.8;

    std::cout << celcius << "\n";

}