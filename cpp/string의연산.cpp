#include <iostream>
#include <string>
using namespace std;

int main(){
    string name_ = "서호준";
    string introduce_ = "나는 ";
    introduce_ = introduce_ + name_; // introduce의 뒤에 name을 붙이고 

    cout << introduce_ << endl;
}