#include<iostream>
using namespace std;
class Count{
    public : 
        static int cnt;

    Count(){
        cnt++;
    }
    	void display(){
            cout<<"count is : "<<cnt<<endl;
        } 
};
int Count :: cnt = 0;
int main(){
    // Count obj1;
    // obj1.display();
    // Count obj2;
    // obj2.display();
    // Count obj3;
    // obj3.display();
    Count c1,c2,c3;
    c1.display();
    c2.display();
    c3.display();

    return 0;
}        