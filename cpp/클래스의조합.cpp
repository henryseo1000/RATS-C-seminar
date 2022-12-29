#include <iostream>
#include <string>
using namespace std;

class Author; //forward declaration
class Book;
class Author{
public :
    Author(){
        
    }
    Author(string n) : name_(n){
        
    }

    void writebook(string t){
        Book * b = new Book(t, this); 
        //this는 객체 자신의 포인터를 돌려준다.
        book_ = b;
    }

    void introducebook(){
        cout << "난 " << book_->title << "을 썼어요." << endl;
    }

    string name_ = "";
    Book * book_;
};

class Book{ // 책은 제목과 지은이를 알고 있어야 한다.
public:
    Book(){

    }
    Book(string t, Author * a) : title(t), author_(a){

    }
    void introduceauthor(){
        cout << "난 " << author_->name_ << "에 의해 쓰여졌어요." << endl;
    }

    Author * author_;
    string title = "";
};

int main(){
    Author * JK = new Author("JK 롤링");

    JK -> writebook("해리 포터");//작가가 책을 쓴다.

    JK -> introducebook();
    JK -> book_ -> introduceauthor();
}