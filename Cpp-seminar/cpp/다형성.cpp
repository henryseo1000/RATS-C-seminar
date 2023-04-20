#include <iostream>
#include <string>
using namespace std;

class Fruit{
public:
    Fruit(){
    }
    void setname(string a){
        name_ = a;
    }
    void setcolor(string a){
        color_ = a;
    }
    /*virtual void eatingsound(){
        cout << "냠냠" << endl;
    }*/
    virtual void eatingsound() = 0;
private:
    string name_ = "과일";
    string color_ = "??";
};

class Apple : public Fruit{
public :
    Apple() : Fruit(){
        setname("사과");
        setcolor("빨강");
    }
    void eatingsound() override{
        cout << "아삭아삭" << endl;
    }
};

class Banana : public Fruit{
public :
    Banana() : Fruit(){
        setname("바나나");
        setcolor("노랑");
    }
    void eatingsound() override{
        cout << "쩝쩝" << endl;
    }
};

int main(){ //Fruit 하위 클래스로 Apple과 Banana가 있다면
    Fruit * f_;
    Fruit * f1_;
    Fruit * f2_;

    f_ = new Fruit();
    f_ -> eatingsound();

    f1_ = new Apple(); //과일 포인터에는 사과도
    f1_ -> eatingsound();

    f2_ = new Banana(); //바나나도 들어갈 수 있다.
    f2_ -> eatingsound();
}