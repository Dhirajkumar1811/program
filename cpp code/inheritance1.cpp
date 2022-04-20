#include <iostream>
using namespace std;
class A{
    public :
        double side;
    public :     
        void read(){
            cout<<"\n Enter the side of square : ";
            cin>>side;
        }
};
class B : public A{
    public : 
        int area;
        void Areaofsquare(){
            cout<<"\n Area of square ";
            read();
            area = side * side;
            cout<<"\n Area of square : "<<area;
        }

};
class C : public A{
  public :
    int peri;
    void Perimeter(){
    cout<<"\n Perimeter of square ";
            read();
           //Areaofsquare();
            peri = 4 * side;
            cout<<"\n Perimeter of square : "<<peri;
    }    
};
int main()
{
    C obj;
    B obj1;
    obj1.Areaofsquare();
    obj.Perimeter();
    return 0;
}