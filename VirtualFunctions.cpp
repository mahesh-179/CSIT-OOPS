#include<iostream>
using namespace std;
class A{
    public:
    virtual void show(){
        cout<<"Class A is called "<<endl;
    }
};
class B : public A{
    public:
    void show(){
        cout<<"Class B is called "<<endl;
    }
};
int main(){
    B b1;
    //compile time or early binding
    b1.A::show(); //scope resolation
    // run time polymorphism or late binding
    A *ptr;
    A b3;
    ptr = &b3;
    ptr->show();
    return 0;
}

// using virtual function we can resolve run time polymorphism
// A virtual function is a member function in a base class that you expect to redefine (override) in your derived classes.