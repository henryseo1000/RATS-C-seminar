#include <iostream>

namespace seo{
    int hojun = 5;
}

namespace kim{
    int hojun = 6;
}

int main(){
    /*
    printf("%d\n", hojun);
    */

    printf("%d\n", seo::hojun); // 식별자를 이용해 꼬리표를 붙여주어야 한다.
    printf("%d\n", kim::hojun);
}