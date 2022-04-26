#include<iostream>
using namespace std;
int main(){
    double num,den;
  //  double divi;
    static double divi = 0;
    cout<<"\n Division";
    cout<<"\n Enter nemarator & denometer : ";
    cin>>num>>den;
    try{
        if(den==0){
            throw den;
        }else {
            divi = num/den;
        }
    }
    catch(double ex){
        cout<<"\n Exception : denomentor shouldn't be Zero ";
    }
    cout<<"\n Division is : "<<divi;
    return 0;
}
