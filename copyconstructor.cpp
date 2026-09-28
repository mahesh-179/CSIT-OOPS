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
    Student (const Student &b){
        name = b.name;
        age = b.age;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};
int main(){
    Student a1("Mahesh",20);
    Student a2=a1;
    Student a3(a2);
    a3.display();
    a2.display();
    return 0;
}