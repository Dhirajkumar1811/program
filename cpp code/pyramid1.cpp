#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"\n Enter No. : ";
    cin>>n;
    for(i=n;i>=1;i--){
        cout<<"\n";
        for(j=1;j<=i;j++){
            cout<<" * ";
        }
    }

return 0;
}
