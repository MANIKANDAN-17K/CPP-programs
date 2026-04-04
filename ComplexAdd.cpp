#include <iostream>
using namespace std;

class complex{
    int r,i;
    public:
        complex(int rl,int im){
            r = rl;
            i = im;
        }
        complex operator + (const complex &obj){
            return complex(r + obj.r , i + obj.i);
        }
        complex operator - (const complex &obj){
            return complex(r - obj.r , i - obj.i);
        }
        void display(){ cout << r << "  - " << i << "i" << endl; }
};
int main(){
    complex c1(10,20),c2(20,10);
    complex c3 = c1 - c2;
    c3.display();
    return 0;
}
