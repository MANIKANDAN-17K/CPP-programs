#include <iostream>
using namespace std;

class Number{
    int value;
    public:
        Number(int val){ value = val;}
        Number operator + (Number obj){
            Number temp(0);
            temp.value = value + obj.value;
            return temp;
        }
        void display(){
            cout << "value :" << value <<endl;
        }
        Number operator - (Number obj){
            Number temp(0);
            temp.value = value - obj.value;
            return temp;
        }
        Number operator * (Number obj){
            Number temp(1);
            temp.value = value * obj.value;
            return temp;
        }
        Number operator / (Number obj){
            Number temp(1);
            temp.value = value / obj.value;
            return temp;
        }
};
int main(){
    Number n1(200),n2(20);
    Number n3 = n1 + n2;
    n3.display();
    n3 = n1 - n2;
    n3.display();
    n3 = n1 * n2;
    n3.display();
     n3 = n1 / n2;
    n3.display();
    return 0;
}
