 
  #include<stdio.h>
  int main()
  {
  float order_amount,discount=0.0,final_amount,delivery_charge;
  int membership_type;
  printf("Enter the order amount :");
  scanf("%f",&order_amount);
  printf("Enter the membership type \n (1for premium, 0 for regular):");
  scanf("%d",&membership_type);
  if(order_amount>=500)
  {
    delivery_charge = 0.0; 
        if (membership_type == 1)
            discount = 0.10 * order_amount; // 10% discount for premium
        else 
            discount = 0.0; 
    }
  else
  {
        delivery_charge = 50.0; 
        discount = 0.0;        
    }
    final_amount = order_amount - discount + delivery_charge;
    printf("Final amount to pay: ₹%.2f\n", final_amount);
}