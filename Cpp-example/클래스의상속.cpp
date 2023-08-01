#include <iostream>
#include <string>
using namespace std;

class Fruit{
public:
    Fruit(){
        
    } // 생성자.
    Fruit(string n, string c) : name_(n), color_(c) {
    
    }
    string name_ = "과일"; //과일의 디폴트 이름은 "과일"
    string color_ = "??"; // 과일의 색깔
};

class Apple : public Fruit{
public :
    Apple() : Fruit(){ //자녀의 생성자를 호출할 때 반드시 부모의 생성자 호출 필요
        name_ = "사과"; //생성자를 호출하면 이름과 색깔을 설정
        color_ = "빨강"; 
    }
};

class Banana : public Fruit{ //자녀의 생성자를 호출할 때 반드시 부모의 생성자 호출 필요
public :
    Banana() : Fruit(){
        name_ = "바나나"; //생성자를 호출하면 이름과 색깔을 설정
        color_ = "노랑";
    }
};

int main(){
    Banana b_;
    Apple a_;
    Fruit f_;

    
}