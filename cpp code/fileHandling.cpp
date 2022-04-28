#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream new_file;
    new_file.open("Dhiraj.txt",ios :: out);

    if(!new_file){
        cout<<"File Creation is failed";
    }
    else{
        cout<<"File is created";
        new_file<<"Daddies Home";
        new_file.close();
    }
    return 0;
}
