#include<stdio.h>
#include<stdlib.h>
void accept(int arr[10],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n\t Enter Element : ");
        scanf("%d",&arr[i]);
    }
}
int Addition(int a[10],int n)
{
    int i;
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    return sum;
}
int read()
{
    int n;
    scanf("%d",&n);
    return n;
}
void display(int A[10],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" %d ",A[i]);
    }
}
int main()
{
    int a[10],n,x;
    printf("\n\t Enter the no. : ");
    n=read();
    accept(a,n);
    printf("\n\t Enter array element  : ");
    display(a,n);
    x=Addition(a,n);
    printf("\n\t Addition is : %d ",x);
    return 0;
}

