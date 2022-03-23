#include<stdio.h>
int main()
{
    int x,y,z;
    system("clear");
   // printf("\n\t Enter the value of x and y: ");
   // scanf("%d%d",&x,&y);
   // z=(x,y,x+y);
   // printf("\n\t z=%d",z);

    z=(x=10,y=20,x+y);
    printf("\n\t z=%d",z);

    z=(1,2,3,4,5,6);
    printf("\n\t z=%d",z);
    return 0;
}