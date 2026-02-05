                       // Bank management system 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct openAcc{
    
    char accName[50];
    char phoneNo[15];
    char accPin[5];
    char accType[50];
    float balance;
    
    

}oa;

int openAccount(FILE* loc);
int withdraw(FILE * loc);
// int isCustomer(int accNo);
// int withdraw();
// int deposite();
// int chqBalance();
// int delAccount();

oa customer;

int main()
{   
    FILE* loc;
    loc = fopen("listofcustomer.txt","r+");


    int userChoice;
    
    printf("==========================================================\n");
    printf("*                !!    WELCOME TO    !!                  *\n");
    printf("*                  --= JHA JI BANK=--                    *\n");
    printf("==========================================================\n");
    printf("How can we help you !!\n");
    printf("1. OPEN ACCOUNT \n");
    printf("2. WITHDRAW MONEY \n");
    printf("3. DEPOSITE MONEY \n");
    printf("4. CHECK BALANCE \n");
    printf("5. CHANGE ACCCOUNT PIN \n");
    printf("6. CLOSE ACCOUNT \n");
    printf("7. EXIT \n");
   
    printf("Enter Your Choice : ");
    scanf("%d",&userChoice);
    
    if(userChoice == 1){
        
        openAccount(loc);
        printf("!!                ***  CONGRATULATIONS  ***             !!\n");
        printf("!!              ACCOUNT CREATED SUCCESSFULLY            !!\n");

        printf("==========================================================\n");
        printf("*!!              THANK YOU FOR CHOOSING US             !!*\n");
        printf("==========================================================\n");

    }

    if(userChoice == 2){
        withdraw(loc);
    }

    int salary = customer.balance;
    printf("%d",salary);
    
        
    
    

    fclose(loc);

    return 0;
}

int openAccount(FILE* loc){
    

    oa customer;
    printf("Enter the Account Holder name : ");
    getchar();
    fgets(customer.accName,sizeof(customer.accName),stdin);
    customer.accName[strcspn(customer.accName, "\n")] = 0;
    
    printf("Enter the Phone Number : ");
    scanf("%s",customer.phoneNo);
    customer.phoneNo[strcspn(customer.phoneNo, "\n")] = 0;
    
    printf("Enter the Account Pin : ");
    scanf("%s",customer.accPin);
    customer.accPin[strcspn(customer.accPin, "\n")] = 0;
    getchar();
    printf("Enter the Account Type (Savings/Current/Business) : ");
    fgets(customer.accType, sizeof(customer.accType), stdin);
    customer.accType[strcspn(customer.accType, "\n")] = 0;
    
    printf("Deposite Some opening Balance : ");
    scanf("%f",&customer.balance);
    
    fprintf(loc,"Account Holder Name : %s , Phone no. : %s , Account PIN : %s , Account Type : %s , Available Balance : $ %.2f\n",customer.accName,customer.phoneNo,customer.accPin,customer.accType,customer.balance);
    
    return 0;
}

int withdraw(FILE* loc){

    int detail[500];
        

    return 0;
}