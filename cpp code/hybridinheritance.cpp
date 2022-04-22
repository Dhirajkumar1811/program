#include<iostream>
using namespace std;
class College{
    public : 
        College(){
        cout<<"\n College!!!";
        }
};
class Department :public College{
   public : 
        Department(){
        cout<<"\n Office Department";  
        }
};
class Liberary : public College{
   public : 
        Liberary(){
        cout<<"\n Liberary"; 
        }    
};
class Canteen : public College{
    public : 
        Canteen(){
        cout<<"\n Canteen";
        } 
};
class Student : public Canteen,Liberary,Department{
    public :
        Student(){ 
        cout<<"\n Student";
        } 
};
int main(){
    Student obj;
    return 0;
}