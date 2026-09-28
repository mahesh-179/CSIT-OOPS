#include<iostream>
using namespace std;
class Person{
     protected:
     string name;
     int age;
};
class Employee : public Person{
    protected:
    int salary;
    int eid;
};
class Manager : public Employee{
    protected:
    string department;
    string positions;
    public:
     Manager(string name,int age,int salary,int eid,string department,string positions){
        this->name=name;
        this->age=age;
        this->salary = salary;
        this->eid = eid;
        this->department = department;
        this->positions = positions;
    }
    void display(){
        cout<<"Employee details\n"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Salary:"<<salary<<endl;
        cout<<"Employee Id:"<<eid<<endl;
        cout<<"Department:"<<department<<endl;
        cout<<"Position:"<<positions<<endl;
    }
};
int main(){
    Manager m1("Mahesh Lamsal",21,35000,2,"Science","CEO");
    m1.display();
}