#include <iostream>
#include <string>

int main(){
    std::string name_;

    std::cin >> name_;
    std::cout << name_ << std::endl;

    std::string introduce_ = "나는 ";
    introduce_ += name_;

    std::cout<< introduce_ << std::endl;
}