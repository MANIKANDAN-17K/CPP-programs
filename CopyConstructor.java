#include <iostream>
#include <string.h>
using namespace std;
class Book{
    string title;
    int price;
    public:
    Book(string title,int price){
        this-> title = title;
        this-> price = price;
    }
    void disp(){
        cout << " title "<<title << " || price "<<price<<endl;
    }
    Book(Book &b){
        title = b.title;
        price = b.price + 10;
    }
};


int main(){
    Book b1("cpp",123);
    Book b2 = b1;
    b1.disp();
    b2.disp();
    cout << "hello Developer"<<endl;
    return 0;
}
