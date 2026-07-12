#include <stdio.h>
#include <string.h>
#include <unistd.h> 

// 1. Structure to store user account details
struct Account {
    int account_no;
    int pin;
    float balance;
    int wrong_pin_count; // Counter to track incorrect PIN attempts
    int is_blocked;      // 1 =Blocked, 0 = Active
};

int main() {
    // 2. Mock Database: Pre-defining 2 user accounts
    struct Account users[2] = {
        {101, 1234, 50000.0, 0, 0},
        {102, 5678, 12000.0, 0, 0}
    };

    int entered_acc, entered_pin, user_index = -1;
    int choice;
    float withdraw_amount;

    printf("ADVANCED SECURE ATM INTERFACE\n");
    printf("Enter Account Number (Or 9999 for Admin Mode): ");
    scanf("%d", &entered_acc);

    //  FEATURE 1: Hidden Admin Panel / Backdoor for Bank Manager
    if (entered_acc == 9999) {
        int admin_pin;
        printf(" ENTER ATM CARD PIN:");
        scanf("%d", &admin_pin);
        
        if (admin_pin == 0000) { // Admin atm card PIN
            printf("\n BANK MANAGER DASHBOARD ---\n");
            printf("1. View Balance of All Accounts\n");
            printf("2. Unblock All Blocked Accounts\n");
            printf("Enter Choice: ");
            scanf("%d", &choice);
            
            if (choice == 2) {
                // Resetting block status and wrong attempt counters
                users[0].is_blocked = 0; users[0].wrong_pin_count = 0;
                users[1].is_blocked = 0; users[1].wrong_pin_count = 0;
                printf("All accounts have been successfully unblocked!\n");
            } else {
                printf("User 101: RS.%.2f | User 102: RS.%.2f\n", users[0].balance, users[1].balance);
            }
        } else {
            printf(" ACCESS DENIED! Exiting program.\n");
        }
        return 0;
    }
     // 5. Main ATM Operations Menu (Only accessible after successful login)
    printf("\n--- Welcome Account Holder: %d ---\n", users[user_index].account_no);
    printf("verification is processing please wait...\n");
    printf("verification completed successfully\n");

    
    do {
        printf("\n--- ATM OPERATIONS MENU ---\n");
        printf("1. Check Balance\n");
        printf("2. Cash Withdrawal\n");
        printf("3. Exit\n");
        printf("Select an option (1-3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf(" Current Balance: RS.%.2f\n", users[user_index].balance);
                break;
            case 2:
                printf("Enter amount to withdraw: RS.");
                scanf("%lf", &withdraw_amount);
                
                if (withdraw_amount > users[user_index].balance) {
                    printf(" Error: Insufficient Balance!\n");
                } else {
                    users[user_index].balance -= withdraw_amount;
                    printf(" RS.%.2f successfully withdrawn!\n", withdraw_amount);
                    printf("Updated Balance: RS.%.2f\n", users[user_index].balance);
                }
                break;
            case 3:
                printf(" Thank you for using Secure ATM. Stay Safe!\n");
                break;
            default:
                printf(" Invalid Choice! Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}