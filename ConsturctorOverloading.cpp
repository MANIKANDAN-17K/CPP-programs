#include <iostream>
#include <string.h>
using namespace std;

class BankAccount{
    int acc_no;
    int bal;
    public:
    BankAccount():bal(0){}
    BankAccount(int b):bal(b){}
    void deposit(int amt){
        bal += amt;
        disp();
    }
    void disp(){
        cout << " balance = "<<bal << endl;
    }
};

int main(){
    BankAccount b1,b2(100);
    b1.disp();
    b2.disp();
    b1.deposit(1);
    b2.deposit(20);
    cout << "hello Developer"<<endl;
    return 0;
}
