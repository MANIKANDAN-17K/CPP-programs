#include <iostream>
using namespace std;

class Add{
    public:
        int operator()(int a,int b){
            return a + b;
        }
};
int main(){
    Add a;
    cout << a(10,20);
    cout << endl;
    return  0;
}
