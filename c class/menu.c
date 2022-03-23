#include<stdio.h>
#include<stdlib.h>
int main()
{
    int  a,x,y,res;
    char ch;
    system("clear");
    do
    {
    printf("\n\t 1.Addition");
    printf("\n\t 2.subtraction");
    printf("\n\t 3.Multiplication");
    printf("\n\t 4.division");
    printf("\n\t 5.modulus");
    printf("\n\t 6.exit");
    printf("\n\t Enter your choice(1-6): ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        /* code */
        printf("\n\t Enter the value of x And y: ");
        scanf("%d%d",&x,&y);
        res=x+y;
        printf("\n\t %d+%d=%d",res,x,y);
        break;

    case 2:
        printf("\n\t Enter the value X and y :");
        scanf("%d%d",&x,&y);
        res=x-y;
        printf("\n\t %d-%d=%d",res,x,y);
        break;

    case 3:
        printf("\n\t Enter the value X and y :");
        scanf("%d%d",&x,&y);
        res=x*y;
        printf("\n\t %d*%d=%d",res,x,y);
        break;    

    case 4:
        printf("\n\t Enter the value X and y :");
        scanf("%d%d",&x,&y);
        res=x/y;
        printf("\n\t %d/%d=%d",res,x,y);
        break;    

    case 5:
        printf("\n\t Enter the value X and y :");
        scanf("%d%d",&x,&y);
        res=x%y;
        printf("\n\t %d%%d=%d",res,x,y);
        break;  

    case 6:
        exit;
        break;                    
    
    default:
        printf("\n\t Invalid choice");
        break;
    }    

    printf("\n\t Do you want to continue((y/n): ");
        scanf("%s",&ch);
    }
        while(ch=='Y' || ch=='y');
        return 0;
    
    

}



