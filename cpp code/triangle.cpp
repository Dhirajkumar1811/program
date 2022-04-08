#include<iostream>
using namespace std;

class Triangle
{
    public :
         int h,b;
         float area;

    void Area(){
        cout<<"Enter height and base"<<endl;
        cin>>h>>b;
        area = 0.5*h*b;
        cout<<"Area of triangle is : "<<area<<endl;
    }     

};
int main(){
    Triangle obj;
    obj.Area();
    return 0;
}