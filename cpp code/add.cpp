#include<iostream>
using namespace std;
class A
{
    private:
            int a,b,res;
    public:
            void get();
            void put();
            void add();
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
    cout<<"\n\t res : "<<res;
}
void A :: add()
{
    res = a + b;
}
int main()
{
    A obj;
    obj.get();
    obj.add();
    obj.put();
    return 0;
}