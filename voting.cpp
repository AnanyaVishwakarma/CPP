#include <iostream>

int main() {
int age = 21;
bool citizen = false;
bool registered = true;

if(age >= 18 && citizen == true && registered == true){
  std::cout << "You can vote";
} else if( age < 18 ){
  std::cout << "You are not old enough to vote.";
} else if(citizen != true){
  std::cout << "You are not eligible to vote";
} else if(registered != true){
  std::cout << "You need to registered first";
} else {
  std::cout << "Sorry! You have not met with the requirements.";
}
}