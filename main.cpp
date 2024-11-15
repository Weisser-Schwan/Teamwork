//
//  main.cpp
//  git
//
//  Created by 唐军华 on 15.11.24.
//

#include <iostream>
#include <string>

void print(std::string msg){
    std::cout << msg << std::endl;
}
int main(int argc, char** argv) {
    // variable declaration and initialization
    std::string greeting = "Hello, world!";
    print(greeting);
    return 0;
}
