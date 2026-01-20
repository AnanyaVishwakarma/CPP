#include <stdio>

int main()
{
    std::string answer1;
    std::cout << "💧 What is the name of the world's longest river?\n";
    std::cout << "1) Missouri River\n";
    std::cout << "2) Nile\n";
    std::cout << "3) Amazon River\n";
    std::cout << "4) Yangtze River\n";
    std::cin >> answer1;
    if (answer1 == "2")
    {
        std::cout << "You're right";
    }
    else
    {
        std::cout << "Choose Again";
    }
}