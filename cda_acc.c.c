#include <stdio.h>

// Define the structure CDAaccount
struct CDAaccount {
    double balance;
    double interest_rate;
    int terms; // in months
};

// Function to get and display account terms and compute balances
void get_data(struct CDAaccount the_account) 
{
    // Display the account terms
    printf("Account Terms: %d months\n", the_account.terms);
    
    // Compute the account balances for each month
    for (int i = 0; i < the_account.terms; i++) {
        the_account.balance += the_account.balance * (the_account.interest_rate / 100.0);
        printf("Balance after month %d: %.2f\n", i + 1, the_account.balance);
    }
}

int main() {
    // Initialize a CDAaccount structure
    struct CDAaccount my_account;
    
    // Ask the user for input data
    printf("Enter initial balance: ");
    scanf("%lf", &my_account.balance);
    
    printf("Enter monthly interest rate (in percent): ");
    scanf("%lf", &my_account.interest_rate);
    
    printf("Enter the number of months (terms): ");
    scanf("%d", &my_account.terms);

    // Call the function to display terms and compute balances
    get_data(my_account);

    return 0;
}
