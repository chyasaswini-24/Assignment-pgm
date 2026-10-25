 /*Checking whether the person is eligible to vote 
    or not by knowing his/her age*/
  #include<stdio.h>
  void main()
  {
  int age;
  printf("enter the age:");
  scanf("%d",&age);
  if( age>=18)
     printf("Eligible to vote");
  else 
     printf("Not eligible to vote");
  }   