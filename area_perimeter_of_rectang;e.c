#include<stdio.h>
int main()
{
    float length,breadth;
    printf("Please enter the length of the rectangle\n");
    scanf("%f",&length);
    printf("Please enter the breadth of the rectangle\n");
    scanf("%f",&breadth);
    float area=length*breadth;
    float perimeter=2*(length+breadth);
    printf("The area %0.2f and perimeter %0.2f of the rectangle is calculated",area,perimeter);
    return 0;

}