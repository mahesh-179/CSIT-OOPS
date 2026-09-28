// default copy constructor
#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;
    public:
    Student(string name,int age){
        this->name = name;
        this->age = age;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};
int main(){
    Student a1("Mahesh",20);
    Student a2=a1;
    a2.display();
    return 0;
}