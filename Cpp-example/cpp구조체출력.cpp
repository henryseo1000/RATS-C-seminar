#include <iostream>
using namespace std;

class INT{ //INT라는 구조체를 선언한다. typedef를 사용함.
public:
    int i;
}; //INT라는 구조체의 변수명은 integer.

int main(){
    INT num; //struct INT로 선언해도 되고
    num.i = 9;
    cout << "i의 값은 : " << num.i << endl;
}