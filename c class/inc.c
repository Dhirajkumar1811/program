#include<stdio.h>
int main()
{
    int x,y,z;
    system("clear");

    printf("\n\t Enter the value of x And y: ");
    scanf("%d%d",&x,&y);

    z=x++ + y++;
    printf("\n\t z=x++ + y++ : x=%d y=%d z=%d",x,y,z);

    z=x-- + y--;
    printf("\n\t z=x-- + y-- : x=%d y=%d z=%d",x,y,z);

    z=++x + ++y;
    printf("\n\t z=++x + ++y : x=%d y=%d z=%d",x,y,z);

    z=--x + --y;
    printf("\n\t z=--x + --y : x=%d y=%d z=%d",x,y,z);

    return 0;

}