#include <iostream>
#include <string>
using namespace std;

class Fruit{
public:
    Fruit(){
        num = new int[10]; // 생성자를 호출할 때 동적할당을 해줬다면?
        cout << "기본 생성자를 호출했어요!" << endl;
    } // 생성자.
    Fruit(string n, string c) : name_(n), color_(c) {
        cout << "매개변수를 가지는 생성자를 호출했어요!" << endl;
    }
    ~Fruit(){
        delete[] num; // 사라질 때 동적할당을 다시 delete
        cout << "소멸자를 호출했어요!" << endl;
    }

    string name_ = "과일"; //과일의 디폴트 이름은 "과일"
    string color_ = "??"; // 과일의 색깔
    int * num; // 정수 포인터
};

int main(){
    Fruit * f1;

    f1 = new Fruit(); //기본 생성자만 활용한 경우
    
    delete f1;
}