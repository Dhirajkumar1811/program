#include<stdio.h>
int main()
{
    int x,y,z,p;
    system("clear");

    printf("\n\t Enter the value of x,y,z: ");
    scanf("%d%d%d",&x,&y,&z);

    p=x<y && x>z;
    printf("\n\t p=x<y && x>z: x=%d y=%d z=%d p=%d",x,y,z,p);

    p=x<y || x>z;
    printf("\n\t p=x<y || x>z: x=%d y=%d z=%d p=%d",x,y,z,p);

    p=!x;
    printf("\n\t p=!x: x=%d p=%d",x,p);

    p=!(x>y);
    printf("\n\t p=!(x>y): x=%d y=%d p=%d",x,y,p);

    return 0;
    }
