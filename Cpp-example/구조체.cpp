#include <stdio.h>

typedef struct INT{ //INT라는 구조체를 선언한다. typedef를 사용함.
    int i;
}integer; //INT라는 구조체의 변수명은 integer.

int main(){
    struct INT number; //struct INT로 선언해도 되고
    number.i = 6;

    printf("%d\n", number.i); //출력은 printf로 출력한다.

    integer num; //integer으로 선언해도 된다.
    num.i = 5;

    printf("%d\n", num.i);
} 