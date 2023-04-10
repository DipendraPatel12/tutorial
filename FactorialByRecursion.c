
#include<stdio.h>
int factorial(int n)
{
int data=0;
    if(n==1)
    {
        return 1;
    }
     data=n*factorial(n-1);
    return data;
}
int main()
{
    int number;
    printf("program to find factorial of a number\n");
    printf("enter any number\n");
    scanf("%d",&number);
    int total=factorial(number);
    printf("factorial of %d is %d\n",number,total);
}
