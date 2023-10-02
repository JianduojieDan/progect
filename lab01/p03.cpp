#include <iostream>
#include <string>
int main() {
    std::string userName;
    std::cout <<" What is your name?" << std::endl;
    std::getline(std::cin, userName);
    std::cout << "Hello, "<< userName <<"!" << std::endl;
    return 0;
}//
// Created by Administrator on 2023/9/20.
//
