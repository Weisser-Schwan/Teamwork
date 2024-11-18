#include <iostream>
#include <string>

// custom function that takes a string as an argument
void print(std::string msg,std::string name) {
// write to stdout
std::cout << msg << name<<"!"<<std::endl;
}
// main function is called at program start
int main(int argc, char** argv) {
    // variable declaration and initialization
    std::cout<<"Please enter your name:";
    std::string name;
    std::cin>>name;
    std::string greeting = "Hello,";
    print(greeting,name);
    return 0;
}
