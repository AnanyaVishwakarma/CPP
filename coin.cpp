#include <iostream>
#include <ctsdlib>

int main (){
    srand(time(NULL));

    int num = rand() % 2; // Generates either 0 or 1; Random
    if(num > 0.5){
        std::cout << "Heads\n";
    } else {
        std::cout << "Tails\n";
    }
    }
