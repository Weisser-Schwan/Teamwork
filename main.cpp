#include <iostream>
#include <string>
// custom function that takes a string as an argument
void print(std::string msg) 
{std::cout << msg << std::endl;
}
// main function is called at program start
int main() {
// variable declaration and initialization
std::string greeting = "Hello out there!";
print(greeting);
return 0;
}