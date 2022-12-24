#include <stdio.h>

int main(){
    char cbuf[7] = {'s','t','u','d','y'}; //문자열
    int ibuf[10]; //10칸짜리 배열의 선언

    printf("%s\n", cbuf);
    for(int i = 0; i < 10; i++){
        printf("%d ", ibuf[i]);
    } 
}