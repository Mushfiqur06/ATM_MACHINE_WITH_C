/**
 * ATM Service App
 * Author: Mushfiqur Rahman
 * Email: mushfiqur06@gmail.com
 * URL:
 */

#include<stdio.h>

int main() {
    int choiceOption, userPin, userAmount = 10000, deposit, withdraw, password, breakLoop = 1;

    while (1) {
        printf("Please enter valid pin number: ");
        scanf("%d", &userPin);
        if (userPin == 1234) {
            password = 1;
            break;
        }
    }

    while (breakLoop) {
        printf("=====Welcome our ATM service=====\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Case\n");
        printf("3. Deposit Case\n");
        printf("4. Quite\n\n");

        printf("What do you want: ");
        scanf("%d", &choiceOption);

        switch (choiceOption) {
            case 1:
                printf("Your Balance is: %d TK\n\n\n", userAmount);
                break;

            case 2:
                printf("Enter the amount to withdraw: ");
                scanf("%d", &withdraw);
                if (withdraw < 500) {
                    printf("You can't withdraw below 500TK\n\n\n");
                } else if (withdraw > userAmount) {
                    printf("Insufficient balance\n\n\n");
                }else if((userAmount - withdraw <= 500)){
                    printf("Your account must have minimum 500TK\n\n\n");    
                } else {
                    userAmount = userAmount - withdraw;
                    printf("Please collect your cash\n");
                    printf("Your current balance is: %dTK\n\n\n", userAmount);
                }
                break;

            case 3:
                printf("Please enter the amount to deposit: ");
                scanf("%d", &deposit);
                userAmount = userAmount + deposit;
                printf("Your current balance is: %d TK\n\n\n", userAmount);
                break;

            case 4:
                printf("Thank you using our ATM Service\n");
                breakLoop = 0;
                break;

            default:
                printf("Invalid your select\n\n\n");
        }
    }

    return 0;
}
