#include<stdio.h>
int main()
{
    int x,y;
    system("clear");
    printf("\n\t Enter the value the x and y: ");
    scanf("%d%d",&x,&y);
    x<y ? printf("\n\t x<y : x=%d y=%d",x,y) :  printf("\n\t x>y : x=%d y=%d",x,y);
    return 0;
}