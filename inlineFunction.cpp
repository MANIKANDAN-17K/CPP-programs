#include <iostream>
#include <string.h>
using namespace std;
class Calculator{
    
    public:
    inline int add(int x,int y){
        return x+y;    
    }
    inline int sqrt(int x){
        return x * x;
    }
};

int main(){
   Calculator c;
    cout << "sum  "<< c.add(10,20)<< endl;
    cout << "sqrt  "<< c.sqrt(10)<<endl;
    cout << "hello Developer"<<endl;
    return 0;
}
