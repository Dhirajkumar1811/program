#include<stdio.h>
int main()
{
    int x,y,z;
    system("clear");

    printf("\n\t Enter the value of x and y: ");
    scanf("%d%d",&x,&y);

    z=x+y;
    printf("%d",z);
    printf("\n\t Addition of %d and %d is %d",x,y,z);
    printf("\n\t\"Addition of %d and %d is %d\"",x,y,z);
    printf("\n\t\'Addition of %d and %d is %d\'",x,y,z);
    printf("\n\t %d+%d=%d",x,y,z);
    printf("\n\t(%d+%d=%d)",x,y,z);
    

    return 0;
}