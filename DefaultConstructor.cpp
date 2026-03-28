#include <iostream>
#include <string.h>
using namespace std;
class Student{
    string name;
    int age;
    public:
    Student(string name = "unknown",int age=0){
        this->name = name;
        this->age = age;
    }
    void display(){
        cout<<"name"<<name<<endl;
        cout<<"age"<<age<<endl;
    }
};
int main(){
    Student s1,s2("mani",22);
    s1.display();
    s2.display();
    cout << "hello Developer"<<endl;
    return 0;
}
