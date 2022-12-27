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
    void introduce(){
        cout << "나는 "<< name_ <<"(이)에요!" << endl;
        cout << color_ << "색 이랍니다." << endl;
    }
    void eatingsound(){
        cout << "냠냠" << endl;
    }
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
};

class Banana : public Fruit{
public :
    Banana() : Fruit(){
        setname("바나나");
        setcolor("노랑");
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