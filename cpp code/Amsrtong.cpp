#include<iostream>
using namespace std;
int main(){
    int n,sum,digit;
    cout<<"Enter 3 digit no. : ";
    cin>>n;
    sum = 0;
    int x;
    x = n;
    while(x > 0){
        digit = x % 10;
        sum = sum + (digit*digit*digit);
        x = x / 10;
    }
    if(sum == n){
        cout<<"Amstrong ";
    }else{
        cout<<" NOt Amstrong";
    }
    return 0;
}