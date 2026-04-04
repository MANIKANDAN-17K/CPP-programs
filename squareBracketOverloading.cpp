
#include <iostream>
using namespace std;

class Array{
    int arr[5];
    public:
        Array(){
            for(int i = 0;i<5;i++){
                arr[i] = i * 5;
            }
        }
        int& operator[] (int idx){
            return arr[idx];
        }
};
int main(){
    Array a;
    cout << a[2] << endl;
    a[2] = 100;
    cout << a[2] << endl;
    return 0;
}
