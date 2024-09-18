#include <stdio.h>
#include <conio.h>

void main()
{
    int pin, pin1 = 7575, c = 1, choice = 0, amount, balance = 100000;
    printf("Welcome to the Ace Bank\n");
start:
    printf("Enter the Pin\n");
    scanf("%d", &pin);
    if (pin == pin1)
    {
        printf("Please select your choice\n");
        printf("1.Deposit\n2.Withdraw\n3.Check Balance\n4.Change Pin\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the amount to be deposited\n");
            scanf("%d", &amount);
            if (amount <= 20000)
            {
                balance = balance + amount;
                printf("The balance is %d\n", balance);
            }
            else
            {
                printf("You can deposit a maximum of 20000\n");
            }
            break;
        case 2:
        printf("Enter the amount to be withdrawn\n");
        scanf("%d", &amount);
        if (amount <= 20000){
            if (amount <= balance){
                balance = balance - amount;
                printf("The current balance is %d\n", balance);
            }
            else{
                printf("Insufficient balance\n");
            }
            
        }
        else{
            printf("You can withdraw a maximum of 20000\n");
        }
            break;
        case 3:
        printf("The balance is %d\n", balance);
            break;
        case 4:
        printf("Enter the new pin\n");
        scanf("%d", &pin1);
        printf("Your pin is updated succesfully...! login again\n");
        goto start;
            break;
        }
    }
    else
    {
        printf("Please enter the valid Pin\n");
        if (c < 3)
        {
            c++;
            goto start;
        }
    }
    printf("Press 1 to continue...\n");
    scanf("%d", &choice);
    if (choice == 1)
    goto start;
    printf("Thanks for using Ace ATM");
}