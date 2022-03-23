#include<stdio.h>
int main()
{
    int x=10, i;
    system("clear");
    for(i=1;i<=5;i++)
        { 
            x=x+i;
            printf("\n\t x=%d",x);
            if(i==3)
            {
                break;
            }
            printf("\n\t x=%d",x);
        }

    
    return 0;    
}