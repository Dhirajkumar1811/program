#include<stdio.h>
#include<stdlib.h>
int main(){
    int x=10;
    int *ptr1;
    int **ptr2;
    int ***ptr3;
    int ****ptr4;

    ptr1 = &x;
    ptr2 = &ptr1;
    ptr3 = &ptr2;
    ptr4 = &ptr3;

    printf("\n\t   value of x : %d ",x);
    printf("\n\t   value of x : %d ",*&x);
    printf("\n\t   value of x : %d ",*ptr1);
    printf("\n\t   value of x : %d ",**ptr2);
    printf("\n\t   value of x : %d ",***ptr3);
    printf("\n\t   value of x : %d ",****ptr4);

    printf("\n\t Address of x : %u ",&x);
    printf("\n\t Address of x : %u ",ptr1);
    printf("\n\t Address of x : %u ",*ptr2);
    printf("\n\t Address of x : %u ",**ptr3);
    printf("\n\t Address of x : %u ",***ptr4);

}