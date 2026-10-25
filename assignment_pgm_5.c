 
  #include<stdio.h>
  int main()
  {
    int age,credit_score;
    double monthly_income;
    // Read input values from the user
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter monthly income (in ₹): ");
    scanf("%lf", &monthly_income);

    printf("Enter credit score: ");
    scanf("%d", &credit_score);
    if (age >= 21 && age <= 60) 
    {
        if (monthly_income >= 25000)
         {
            if (credit_score >= 700) {
                printf("Loan approved\n");
            } else {
                printf("Loan rejected: credit score below 700\n");
            }
            
        } else {
            printf("Loan rejected: income below ₹25,000\n");
        }
        
    } else {
        printf("Loan rejected: age not in 21 to 60\n");
    }
}