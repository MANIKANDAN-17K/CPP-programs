#include <iostream>
using namespace std;

class Number{
    int value;
    public:
        Number(int val){ value = val;}
        // prefix
        Number operator++(){
            value++;
            return *this;
        }
        // postfix
        Number operator++(int){
            Number temp = *this;
            value++;
            return temp;
        } 
        void display() {
        cout << "Value: " << value << endl;
        }
          Number operator--(){
            value--;
            return *this;
        }
        // postfix
        Number operator--(int){
            Number temp = *this;
            value--;
            return temp;
        }
    
};
int main(){
    Number n1(10);
    n1++;
    n1.display();
    ++n1;
    n1.display();
     n1--;
    n1.display();
    --n1;
    n1.display();
    return 0;
}
