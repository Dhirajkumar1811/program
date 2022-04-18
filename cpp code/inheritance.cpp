#include<iostream>
using namespace std;
class Read{
    protected : 
      // int a,b;
    public :
        int a=5,b=5;
        // cout<<"\n Enter Two  no.s :";
        // cin>>a;
        // cout<<"\n Enter Two  no.s :";
        // cin>>b;
};
class Add : public Read{
    public : 
    int c;
    void add(){
        c = a + b;
        cout<<"\n addition : "<<c;
    }
  
};
int main(){
    Add obj;
    obj.add();
    return 0;
}