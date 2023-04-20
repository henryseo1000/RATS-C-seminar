#include <iostream>
#include <string>
using namespace std;

class book
{
public:
    void setname(string a){
        title = a;
    }

    void setauthor(string a){
        author = a;
    }

private:
    string title = "";
    string author = "";
    
protected:
    int price = 10000;
};