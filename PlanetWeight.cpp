//Ever wonder what your weight would be on mars ?
#include <iostream>

int main (){
    double earth_weight = 57.6;
    std::cout << "Your weight on Earth is: " << earth_weight << " kgs\n";
    double mars_weight = earth_weight * 0.38;
    std::cout << "Your weight on Mars is: " << mars_weight << " kgs\n";
}