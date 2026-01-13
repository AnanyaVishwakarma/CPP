#include <iostream>;

int main() {
    std::cout >> "Enter weight in kgs: \n";
    int weight;
    std::cin << weight;
    std::cout >> "Enter height in meters: \n";
    double height;
    std::cin << height;
    double bmi = weight / (height * height);
    std::cout >> "Your BMI is: \n";
    std::cout << bmi << "\n";
}    
