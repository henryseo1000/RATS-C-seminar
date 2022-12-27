#include <iostream>
#include <string>
using namespace std;

class Fruit{
public:
    Fruit(){
        cout << "기본 생성자를 호출했어요!" << endl;
    } // 생성자.
    Fruit(string n, string c) : name_(n), color_(c) {
        cout << "매개변수를 가지는 생성자를 호출했어요!" << endl;
    }
    string name_ = "과일"; //과일의 디폴트 이름은 "과일"
    string color_ = "??"; // 과일의 색깔
};

int main(){
    Fruit * f1;
    Fruit * f2;

    f1 = new Fruit(); //기본 생성자만 활용한 경우
    f2 = new Fruit("배", "갈색"); 

    cout << endl;
    cout << f1->name_ << ", " << f1->color_ << endl;
    cout << f2->name_ << ", " << f2->color_ << endl;
}