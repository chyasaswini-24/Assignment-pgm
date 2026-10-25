 /*Checking whether the given number is positive, negative or zero*/
#include<stdio.h>
void main()
{
int a;
printf("take the value of a number:");
scanf("%d",&a);
if(a==0)
printf ("\n %d it neither positive nor negative", a);
else
{ if(a>0)
printf("\n %d is positive", a);
else
printf("\n %d is negative ",a);
}
printf("\n end of the program");
}
