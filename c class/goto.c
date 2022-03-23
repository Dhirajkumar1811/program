#include<stdio.h>
int main()
{
    int i;
    system("clear");
    i=1;
    up : printf("\n\t i=%d",i);
    i++;
    if(i<=5)
        {
            goto up;
        }
    return 0;    
}