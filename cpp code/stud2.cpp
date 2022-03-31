
#include<iostream>
using namespace std;
class Student
{
    private:
            int roll;
            char name[25];
            int m1,m2,m3,m4,m5;
            double per;

    public:
            void get();
            void put();
            
};
void  Student :: get()
 {
    cout<<"\n\t Enter roll no. : ";
    cin>> roll;
    cout<<"\n\t Enter name : ";
    cin>> name;
    cout<<"\n\t Enter marks(m1,m2,m3,m4,m5) : ";
    cin>>m1>>m2>>m3>>m4>>m5;
    per=((m1+m2+m3+m4+m5)*100)/500;
}

void   Student :: put()
{
    cout<<"\n\t roll: "<<roll;
    cout<<"\n\t name: "<<name;
    cout<<"\n\t m1: "<<m1<<"m2: "<<m2<<"m3: "<<m3<<"m4: "<<m4<<"m5: "<<m5;
    cout<<"\n\t per: "<<per;
}

int main()
{
    Student objStudent;
    objStudent.get();
    objStudent.put();
    return 0;
}