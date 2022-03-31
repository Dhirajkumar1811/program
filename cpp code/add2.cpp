#include<iostream>
using namespace std;
class A
{
    private:
            int a,b;
    public:
            void get();
            void put();
            int add();
};
void A :: get()
{
    cout<<"\n\t Enter The value of a & b : ";
    cin>>a>>b;

}
void A :: put()
{
    cout<<"\n\t a : "<<a;
    cout<<"\n\t b : "<<b;
    //cout<<"\n\t res : "<<res;
}
int A :: add()
{
   return a+b;
}
int main()
{
    A obj;
    obj.get();
    obj.put();
    cout<<"\n\t obj.add() : "<<obj.add();
    return 0;
}