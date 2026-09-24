/*
1. Define Constructor ? Also write characteristics of a constructor
--> A constructor is a special member function in c++ which is automatically invoked when object is created and used to initialize 
object .

Characteristics of constructor:
1. Constructor name should be same as name of the class .
2. A class can have multiple constructor and can be overloaded.
3. Constructor can take multiple arguments.
4. Constructor can return value not even void.
5. It is used to initialize value.

Types of constructor
--> Default Constructor
--> Parameterized Constructor
--> Copy Constructor


*/

#include<iostream>
using namespace std;
class Bank{
    private:
    string name;
    int accno;
    int balance;
    public:
    Bank(){
        cout<<"Default Constructor is invoked"<<endl; // default constructor is invoked
    }
    // example of inline constructor 
    // inline Bank(string n,int a,int b):name(n),accno(a),balance(b){

    // }
    Bank(string name,int accno,int balance){ // here bank() and bank(para1,para2,para3) function name same but parameter diff - construtor overloading
        this->name=name;  // this pointer is used to locate the object (current)
        this->accno=accno;
        this->balance=balance;
    }
    //copy constructor
    Bank(Bank &b){
        name = b.name;
        accno = b.accno;
        balance = b.balance;
    }
    void display(){
        cout << "---------------- Customer Bank Details ----------------" << endl;
        cout << "Name\t\t        \tAccount Number\t\t\t  Balance" << endl;
        cout << name << "\t\t" << accno << "\t\t\t" << balance << endl;    
    }
};
int main(){
    Bank b1;// creating object
    Bank b2("Mahesh Raj Lamsal",10000001,1000);
    b2.display();
    Bank b3(b2);
    b3.display();
    return 0;
}