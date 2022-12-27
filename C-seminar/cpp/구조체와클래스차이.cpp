#include <iostream>
#include <string>
using namespace std;

class book
{
    string title = "";
    string author = "";
    int price = 10000;

    void setname(string a){
        title = a;
    }

    void setauthor(string a){
        author = a;
    }
};

int main(){
    book HarryPotter;
    HarryPotter.setname("HarryPotter");
    HarryPotter.setauthor("J.K Rowling");
    
    cout << HarryPotter.title << " 책의 가격은 : " << HarryPotter.price << endl;
    cout << "지은이는 : " << HarryPotter.author << endl;
}