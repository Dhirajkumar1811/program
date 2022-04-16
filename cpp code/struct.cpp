#include<iostream>
using namespace std;
struct Driving{
    string name;
    int age; 
};
int main(){

    Driving D ;

    cout<<"\n Enter your name : ";
    cin>>D.name;
    cout<<"\n Enter your age : ";
    cin>>D.age;

    cout<<"\n  name : "<<D.name;
    cout<<"\n  age : "<<D.age;

    if(D.age>=18){
        cout<<"\n you are Eligible for Driving licences ";
    }
    else{
        cout<<"\n you are not Eligible Driving licences";
    }
    return 0;
}