#include <iostream>
using namespace std;

class Test{
    public:
        void* operator new(size_t size){
            cout << "Custom new\n";
            return malloc(size);
        }
        void operator delete(void* ptr){
            cout << "Custom delete\n";
            free(ptr);
        }
};

int main(){
    Test *t = new Test;
    delete t;
    cout << endl;
    return  0;
}
