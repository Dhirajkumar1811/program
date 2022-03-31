#include<iostream>
using namespace std;
class A
{
    private :
            int n;
    public : 
            void get();
            void put();
            void fibo();
};
void A :: get()
{
    cout<<"\n\t Enter the no. n : ";
    cin>>n;
}
void A :: put()
{
    cout<<"\n\t The fibonacii series is  : ";
  //  cout<<"fibo of n : ";
}
void A :: fibo()
{
    int f0=0;
    int f1=1;
    if(n<=0)
    {
        cout<<"\n\t The no is negative";
    }
    else if(n==1)
    {
        cout<<" "<<f0;
    }
    else if(n==2)
    {
        cout<<" "<<f0<<" "<<f1; 
    }
    else
    {
        cout<<" "<<f0<<" "<<f1; 
    }
    int i,t;
    for(i=1;i<=n-2;i++)
    {
        t=f0+f1;
        cout<<" "<<t;
        f0=f1;
        f1=t;
    }
}
int main()
{
    A obj;
    obj.get();
    obj.put();
    obj.fibo();
    return 0;

}
