#include <iostream>
#include <string.h>
using namespace std;
class Rectangle{
    int length,width;
    public:
    Rectangle(int l,int w):length(l),width(w){}
    void display(){
        cout << "area is "<< length * width << endl;
    }
};
int main(){
   Rectangle r(10,20);
   r.display();
    cout << "hello Developer"<<endl;
    return 0;
}
