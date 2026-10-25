 
  #include<stdio.h>
  
  int main() {
    int entered_id;
    int entered_password;

    // Prompt user for input
    printf("Enter User ID: ");
    scanf("%d", &entered_id);

    // Validate User ID first
    if (entered_id != 101) {
        printf("User not found\n");
    } else {
        printf("Enter Password: ");
        scanf("%d", &entered_password);

        if (entered_password == 4321) {
            printf("Login successful\n");
        } else {
            printf("Incorrect password\n");
        }
    }

    }