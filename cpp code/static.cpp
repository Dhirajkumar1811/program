#include<iostream>
using namespace std;
class  Student{

public:
    string name;
    int roll_no;
    static string clg_name;
    
    void student(){
        cout<<"Enter student name : "<<endl;
        cin>>name;
        cout<<"Enter roll no.: "<<endl;
        cin>>roll_no;

         cout<<"Student name : "<<name<<endl;
         cout<<"Student roll no."<<roll_no<<endl;
         cout<<"college name : "<<clg_name<<endl; 
    }
    
};
string Student :: clg_name = "MET_BKC";
int main(){

    // Student obj;
    // obj.student();
    Student obj[2];
    for (int i = 0; i < 2; i++)
    {
        obj[i].student();
    }
    
    return 0;
}
