 /*Calculating the area and perimeter of a rectangle 
   by using given length and breadth */
#include<stdio.h>
void main()
{
float a,b,area,perimeter;
printf("Values of length and breadth :");
scanf("%f%f",&a,&b);
area=a*b;
perimeter=2*(a+b);
printf("area is %f \n perimeter is %f",area,perimeter);
}

