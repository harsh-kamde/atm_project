// () # & !

#include <stdio.h>
#include <stdlib.h>

void cashWithDraw();
void balanceEnquiry();
void balanceDeposit();
void pinChange();
int pinValidate();

int balance, PIN;
char choice;

int main()
{

    int choice = 1;

    int option;

    balance = 800000;
    PIN = 2525;

    while (option != 5 && choice)
    {
            system("cls");

            printf("\n\n\n");
            printf("********************* Welcome to the ATM *****************************\n");
            printf("\n\n");
            printf("                      1. CashWithdraw\n");
            printf("                      2. Balance Enquiry\n");
            printf("                      3. Balance Deposit\n");
            printf("                      4. PIN change\n");
            printf("                      5. Exit\n");

            printf("\n\n\nEnter any option: ");
            scanf("%d", &option);
            printf("\n\n");

            switch (option)
            {
            case 1:
                cashWithDraw();
                break;
            case 2:
                balanceEnquiry();
                break;
            case 3:
                balanceDeposit();
                break;
            case 4:
                pinChange();
                break;
            case 5:
                break;
            default:
                printf("\nInvalid selection :( \n");
                break;
            }

            printf("\nDo you want to continue: \nPress 1 : for Yes \nPress 0 : for No \n");
            scanf("%d", &choice);
    }
    system("cls");
    printf("\n\n\n\nThank you for using Us :)\n\n\n\n");


    return 0;
}

void cashWithDraw()
{
    system("cls");
    printf("-------------------------Account Type ---------------------------------------------------------\n\n");
    printf("1. Savings Account\n");
    printf("2. Current Account\n");
    printf("3. Business Account\n\n\n");
    printf("Enter Your choice: \n");

    int option;
    scanf("%d", &option);
    system("cls");
    switch (option)
    {
    case 1:
        if (pinValidate())
        {

            printf("\nSavings account transcation does not done over 25000\n");
            printf("Enter the amount in multiple of 100:\n");
            int amount;
            scanf("%d", &amount);
            system("cls");
            if (amount <= 25000)
            {
                if (amount % 100 == 0)
                {
                    printf("\nCollect Your Cash \n");
                    balance -= amount;
                    printf("Thank you for Using Our Services\n");
                }
                else
                {
                    printf("Amount is not in multiples of 100\n");
                }
            }
            else
            {
                printf("\nEnter amount within daily limit\n");
            }
        }
        else
        {
            break;
        }
        break;

    case 2:
        if (pinValidate())
        {

            printf("\nCurrent account transcation does not done over 50000\n");
            printf("Enter the amount in multiple of 100:\n");
            int amount;
            scanf("%d", &amount);
            system("cls");
            if (amount <= 50000)
            {
                if (amount % 100 == 0)
                {
                    printf("\nCollect Your Cash \n");
                    balance -= amount;
                    printf("Thank you for Using Our Services\n");
                }
                else
                {
                    printf("\nAmount is not in multiples of 100\n");
                }
            }
            else
            {
                printf("\nEnter amount within daily limit\n");
            }
        }
        else
        {
            break;
        }
        break;
    case 3:
        if (pinValidate())
        {

            printf("\nBusiness account transcation \n");
            printf("Enter the amount in multiple of 100:\n");
            int amount;
            scanf("%d", &amount);
            system("cls");
            if (amount <= balance)
            {
                if (amount % 100 == 0)
                {
                    printf("\nCollect Your Cash \n");
                    balance -= amount;
                    printf("\nThank you for Using Our Services\n");
                }
                else
                {
                    printf("\nAmount is not in multiples of 100\n");
                }
            }
            else
            {
                printf("\nCashing amount is more than balance\n");
            }
        }
        else
        {
            break;
        }
        break;

    default:
        break;
    }
}
void balanceEnquiry()
{
    printf("-------------------------Balance Enquiry ---------------------------------------------------------\n\n");
    if (pinValidate())
    {
        
        printf("\nYour Balance is: %d\n\n", balance);
    }
    else
    {
        printf("\nIncorrect PIN\n");
    }
}

void balanceDeposit()
{
    system("cls");
    printf("-------------------------Balance Deposit ---------------------------------------------------------\n");
    printf("1. Savings Account\n");
    printf("2. Current Account\n");
    printf("3. Business Account\n\n\n");
    printf("Enter Your choice: \n");
    int option;
    scanf("%d", &option);
    system("cls");
    switch (option)
    {
    case 1:
        if (pinValidate())
        {

            printf("\nSavings account transcation does not done over 25000\n");
            printf("Enter the amount in multiple of 100:\n");
            int amount;
            scanf("%d", &amount);
            system("cls");
            if (amount <= 25000)
            {
                if (amount % 100 == 0)
                {
                    printf("\nInput Your Cash \n");
                    balance += amount;
                    printf("\nThank you for Using Our Services\n");
                }
                else
                {
                    printf("\nAmount is not in multiples of 100\n");
                }
            }
            else
            {
                printf("\nEnter amount within daily limit\n");
            }
        }
        else
        {
            break;
        }
        break;

    case 2:
        if (pinValidate())
        {

            printf("\nCurrent account transcation does not done over 50000\n");
            printf("Enter the amount in multiple of 100:\n");
            int amount;
            scanf("%d", &amount);
            system("cls");
            if (amount <= 50000)
            {
                if (amount % 100 == 0)
                {
                    printf("\nInput Your Cash \n");
                    balance += amount;
                    printf("Thank you for Using Our Services\n");
                }
                else
                {
                    printf("\nAmount is not in multiples of 100\n");
                }
            }
            else
            {
                printf("\nEnter amount within daily limit\n");
            }
        }
        else
        {
            break;
        }
        break;
    case 3:
        if (pinValidate())
        {

            printf("\nBusiness account transcation \n");
            printf("Enter the amount in multiple of 100:\n");
            int amount;
            scanf("%d", &amount);
            system("cls");
            if (amount <= balance)
            {
                if (amount % 100 == 0)
                {
                    printf("\nInput Your Cash \n");
                    balance += amount;
                    printf("Thank you for Using Our Services\n");
                }
                else
                {
                    printf("\nAmount is not in multiples of 100\n");
                }
            }
        }
        else
        {
            break;
        }
        break;

    default:
        break;
    }
}

void pinChange()
{
    system("cls");
    printf("-------------------------PIN Change ---------------------------------------------------------\n");
    printf("Enter you old PIN:\n");
    int pin;
    scanf("%d", &pin);
    system("cls");
    if (PIN == pin)
    {
        printf("\nEnter Your new PIN: \n");
        scanf("%d",&PIN);
        printf("\nPIN change Successfully ..\n");
    }
}

int pinValidate()
{
    system("cls");
    int pin;
    printf("\nEnter Your PIN: \n");
    scanf("%d", &pin);
    printf("\n");
    system("cls");
    if (PIN == pin)
    {
        return 1;
    }
    else
    {
        printf("\nInvalid PIN\n");
        return 0;
    }
}