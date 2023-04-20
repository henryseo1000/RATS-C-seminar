struct book
{
    char title[30];
    char author[30];
    int price;
}; // 위 경우는 변수를 선언할 때 : struct book 변수명


typedef struct book
{
    char title[30];
    char author[30];
    int price;
} TEXTBOOK; // 위 경우는 변수를 선언할 때 : struct book 변수명 또는 TEXTBOOK 변수명