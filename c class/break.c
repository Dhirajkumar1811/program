#include<stdio.h>
int main()
{
    int i;
    system("clear");
    for(i=1;i<=10;i++)
        {
            printf("\n\t i=%d",i);
            if(i==10)
            {
                break;
            }
            printf("\n\t i=%d",i);
        }

    
    return 0;    
}