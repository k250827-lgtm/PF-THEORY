# include<stdio.h>
# include<string.h>
int main(){

int daily_limit =5000;
int total_spending ,transaction_amount, no_of_transaction;
char transactioncountry[100];

printf("enter the total_spending:");
scanf("%d",&total_spending);

printf("enter the transaction_amount:");
scanf("%d",& transaction_amount);
 if (total_spending + transaction_amount > daily_limit){
        printf("Transaction flagged: Daily limit exceeded.\n");
        return 0;
    }
	printf("Enter transaction country: ");
    scanf("%s",transactioncountry );
     if ((strcmp(transactioncountry, "Pakistan") != 0 &&
          strcmp(transactioncountry, "pakistan") != 0 &&
          strcmp(transactioncountry, "UAE") != 0 &&
          strcmp(transactioncountry, "uae") != 0)) {
        printf("Transaction flagged: Unusual country.\n");
        return 0;
    }
     printf("Enter number of transactions in one hour : ");
    scanf("%d", &no_of_transaction);

   
    if (no_of_transaction > 3) {
        printf("Transaction flagged: Too many transactions in one hour.\n");
        return 0;
    }

    printf("Transaction is being processed.\n");
    return 0;
}

