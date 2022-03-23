#include<stdio.h>
int main()
{
    int x,y;
    system("clear");

    printf("\n\t Enter the value of x: ");
    scanf("%d",&x);

    y=x;
    printf("\n\t y=x : y=%d x=%d",x,y);

     x+=y;
    printf("\n\t x+=y : x=%d y=%d",x,y);

     x-=y;
    printf("\n\t x-=y : x=%d y=%d",x,y);

     x*=y;
    printf("\n\t x*=y : x=%d y=%d",x,y);

     x/=y;
    printf("\n\t x/=y : x=%d y=%d",x,y);

     x%=y;
    printf("\n\t x%%=y : x=%d y=%d",x,y);

     x^=y;
    printf("\n\t x^=y : x=%d y=%d",x,y);

     x>>=y;
    printf("\n\t x>>=y : x=%d y=%d",x,y);

     x<<=y;
    printf("\n\t x<<=y : x=%d y=%d",x,y);

    return 0;

}
