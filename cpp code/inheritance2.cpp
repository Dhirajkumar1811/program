#include <iostream>
using namespace std;
class A{
    public : 
        int n1,n2;
        void read(){
            cout<<"\n Enter two no.s : ";
            cin>>n1;
            cin>>n2;
            }
};
class B : public A {

public:
   double divi;
   void division(){
       read();
       divi = (double)n1 / (double)n2;
       cout<<"\n Division : "<<divi;
   }
};
class C : public A{
    public : 
        int m;
        void mod(){
            read();
            m = n1 % n2;
       cout<<"\n MOD : "<<m;
        }
};
int main(){
    C obj;
//  obj.read();
    B obj1;
    obj1.division();
    obj.mod();
    return 0;
}

