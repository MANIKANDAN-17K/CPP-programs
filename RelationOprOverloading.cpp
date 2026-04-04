#include <iostream>
using namespace std;

class Boolean{
    int value;
    public:
        Boolean(int v):value(v){}
        
        bool operator == (const Boolean &b)const{return value == b.value;}
        bool operator > (const Boolean &b)const{return value > b.value;}
        bool operator < (const Boolean &b)const{return value < b.value;}
};
int main(){
    Boolean b1(10),b2(20);
    if(b1 == b2){cout << "equal \n";}
    else {  cout << "not equal \n";}
    if(b1 < b2){cout << "b1 is less than \n";}
    else {  cout << "not equal \n";}
    return 0;
}
