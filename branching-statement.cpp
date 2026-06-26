// Eligible for voting or not by simple if-else 


#include<iostream>
using namespace std;

int main () {
int age;

cout<<"Enter Your Age :";
cin>>age;

if(age>=18) {
    cout<<"You are Eligible for voting";
}
else if(age<=0){
    cout<<"Enter your age correctly, age must be positive ";
}
else {
    cout<<"You cannot vote, you are ineligible";
}
return 0;
}