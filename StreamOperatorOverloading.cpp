#include<iostream>
using namespace std;

class stream{
    int val;
    public:
    stream(int v = 0):val(v){}
    friend istream& operator>>(istream &in,stream &obj){
        cout << "enter value :";
        in >> obj.val;
        return in;
    }
    friend ostream& operator<<(ostream &out,const stream &obj){
        out << obj.val;
        return out;
    }
};
int main(){
    stream a,b;
    cin >> a >> b;
    cout << "values : "<< a << " " << b;
    return 0;
}
