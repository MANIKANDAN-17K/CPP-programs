#include <iostream>
#include <string.h>
using namespace std;
class Box{
    int length;
    public:
    Box(int l):length(l){}
    void disp(){cout<<"length"<< length <<endl;}
    friend void displ(Box b){
        cout << "flength " << b.length<<endl;
    }
};

int main(){
    Box b(20);
    b.disp();
    displ(b);
    return 0;
}
