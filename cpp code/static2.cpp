#include<iostream>
using namespace std;
class Area{
    public : 
        	static long height,base;
            static long result;

            static void areaofshape(){
                cout<<"PARALLELOGRAM\n";
                cout<<"Enter base and height : \n";
                cin>>base>>height;
                result = base*height;
                cout<<"\nArea of Parallelogram is : \n"<<result;
                cout<<"     ";

                cout<<"\nTRIANGLE\n";
                cout<<"Enter base and height : \n";
                cin>>base>>height;
                result = 0.5*base*height;
                cout<<"Area of triangle is : \n"<<result;
            }
};
long Area :: base = 0;
long Area :: height = 0;
long Area :: result = 0;

int main(){
    Area :: areaofshape();
    return 0;
}