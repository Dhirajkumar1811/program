
#include <iostream>
using namespace std;
class Division{
    public : 
        double num,den,divi;
        
        Division(){
            cout <<"\n Enter numerator & denometer : ";
            cin>>num>>den;
            divi = num/den;
        }
};
int main(){
//Division obj;
try{
     Division obj;
   if(obj.den==0){
    throw obj.den;
   } 
   else{
       cout<<"\n Result is : "obj.divi;
    
   }
}
catch(double ex){
    cout<<"\n Exception : denominator shouldn't be zero";
}

    return 0;
}