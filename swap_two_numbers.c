#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    printf("The values of a and b before swapping %d %d\n",a,b);
    int temp=a;
    a=b;
    b=temp;
    printf("The values of a and b after swapping %d %d\n",a,b);
    return 0;
}