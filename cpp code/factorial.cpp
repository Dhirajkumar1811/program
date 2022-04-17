#include<iostream>
using namespace std;
int main(){
    int num,fact;
    fact=1;
    cout<<"\n Enter positive no. : ";
    cin>>num;
    if(num > 0 ){
        for(int i = 1;i <= num;i++){
            fact *= i;
        }
        cout<<"factorial of "<<num<<" is : "<<fact;
    }else{
        cout<<"Enter +ve number ";
    }
    return 0;
}