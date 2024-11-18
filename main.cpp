#include <iostream>
#include <string>
std::string get_name_from_terminal(){
	std::string name;
	std::cin>>name;	
	return name;

}
// custom function that takes a string as an argument
void print(std::string msg) {
// write to stdout
std::cout << msg << std::endl;
}
// main function is called at program start
int main(int argc, char** argv) {
    // variable declaration and initialization
    std::cout<<"Please enter your name:";
    std::string greeting = "Hello,";
    std::string name;
    name=get_name_from_terminal();
    greeting+=name;
    greeting+="!";
    print(greeting);
    return 0;
}
