#include<iostream>
using namespace std;
class Person{
    public:
    int age;
    float salary;

};
class Student : public Person{
    public:
    int sid;
    float CGPA;
    Student (int age,float salary,int sid,float CGPA){
        this->age=age;
        this->salary = salary;
        this->sid = sid;
        this->CGPA=CGPA;
    }
    void student_display(){
        cout<<age<<" "<<salary<<" "<<sid<<" "<<CGPA<<" "<<endl;
    }
};
class Doctor : public Person{
    public:
    int did;
    char h_name;
    Doctor (int age,float salary,int did,char h_name){
        this->age=age;
        this->salary = salary;
        this->did = did;
        this->h_name=h_name;
    }
    void doctor_display(){
        cout<<age<<" "<<salary<<" "<<did<<" "<<h_name<<" "<<endl;
    }
};
class Clerk : public Person{
    public:
    Clerk (int age,float salary){
        this->age=age;
        this->salary=salary;
    }
    void clerk_display(){
        cout<<age<<" "<<salary<<" "<<endl;
    }

};
int main(){
    Student s1(21,1000,1,3.45);
    s1.student_display();
    Doctor d1(21,1000,1,'D');
    d1.doctor_display();
    Clerk c1(21,1000);
    c1.clerk_display();
    return 0;

}
