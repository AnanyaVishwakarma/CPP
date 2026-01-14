//program for my level at 
#include <stdio.h>

int main () {
    int level = 3; 
      if(level <= 5){
    std::cout << "Bronze \n";
  } else if(level <= 10){
    std::cout << "Silver \n";
  } else if(level  <= 15){
    std::cout << "Gold \n";
  } else if(level <= 20) {
    std::cout << "Platinum \n";
  } else {
    std::cout << "Diamond \n";
  }
 
}