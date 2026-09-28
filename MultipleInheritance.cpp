#include<iostream>
using namespace std;
class Engineer{
    public:
    string specilizations;
    public:
    void display_spe(){
        cout<<"I am specialized in "<<specilizations<<endl;
    }
};
class Youtuber{
    public:
    int subscribers;
    public:
    void sub_count(){
        cout<<"I have total subscriber count of "<<subscribers<<endl;
    }
};

class CodeEngineer:public Youtuber,public Engineer{
    public:
    string name;
    CodeEngineer(string name,string specilizations,int subscribers){
        this->name=name;
        this->specilizations=specilizations;
        this->subscribers = subscribers;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        display_spe();
        sub_count();
    }
};
int main(){
    CodeEngineer e1("Mahesh","CSIT",1000);
    e1.display();
}