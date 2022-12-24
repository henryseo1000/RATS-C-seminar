#include <iostream>
#include <string>
using namespace std;

class Fruit{
public:
    Fruit(){
        
    }
    void introduce(){
        cout << "나는 과일이에요!" << endl;
    }
    void eatingsound(){
        cout << "냠냠" << endl;
    }
};

class Apple : public Fruit{
public :
    Apple() : Fruit(){

    }
    void introduce() {
        Fruit::introduce();
        cout << "사과라고 해요!" << endl;
    }
};

class Banana : public Fruit{
public :
    Banana() : Fruit(){

    }
    void introduce() {
        Fruit::introduce();
        cout << "바나나라고 해요!" << endl;
    }
};

int main(){
    Banana b_;
    Apple a_;
    Fruit f_;

    b_.introduce();
    cout << endl;

    a_.introduce();
    cout << endl;
    
    f_.introduce();
}