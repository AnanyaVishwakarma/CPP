#include <stdio>
#include <cstdlib>

int main () {
  srand(time(NULL));
   int random = std::rand() % 6;
   std::cout << random;

   if(random == 1){
     std::cout << "Don't pursue happiness – create it";
   } else if(random == 2){
     std::cout << "All things are difficult before they are easy.";
   } else if(random == 3){
     std::cout << "The early bird gets the worm, but the second mouse gets the cheese";
   } else if(random == 4){
     std::cout << "Someone in your life needs a letter from you";
   } else if(random == 5){
     std::cout << "The fortune you search for is in another cookie.";
   } else {
     std::cout << "Help! I'm being held prisoner in a Chinese bakery!";
   } 

}