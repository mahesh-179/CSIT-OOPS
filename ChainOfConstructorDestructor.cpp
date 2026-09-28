#include<iostream>
using namespace std;

class Person{
public:
    Person(){
        cout << "Person constructor" << endl;
    }

    ~Person(){
        cout << "Person destructor" << endl;
    }
};

class Student : public Person{
public:
    Student(){
        cout << "Student constructor" << endl;
    }

    ~Student(){
        cout << "Student destructor" << endl;
    }
};

int main(){
    Student s1;

    return 0;
}