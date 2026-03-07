#include <stdio.h>
#include "account.h"

int main() {
    int account_id;
    float amt_1, amt_2, amt_3, amt_4;
    // read account_id from input
    scanf("%d", &account_id);
    scanf("%f", &amt_1);
    scanf("%f", &amt_2);
    scanf("%f", &amt_3);
    scanf("%f", &amt_4);

    // create an account using create_account() and print "Account <id> created"
    Account *account = create_account(account_id);
    printf("Account %d created\n", account_id);
    printf("Balance: %.2f\n", get_balance(account));
    deposit(account, amt_1);
    printf("Deposited %.2f\n", amt_1);
    printf("Balance: %.2f\n", get_balance(account));
    int indicator = withdraw(account, amt_2);
    if (indicator == 0) {
        printf("Withdrawal failed: insufficient funds\n");
    } else {
        printf("Withdrew %.2f\n", amt_2);
    }
    printf("Balance: %.2f\n", get_balance(account));
    deposit(account, amt_3);
    printf("Deposited %.2f\n", amt_3);
    printf("Balance: %.2f\n", get_balance(account));
    indicator = withdraw(account, amt_4);
    if (indicator == 0) {
        printf("Withdrawal failed: insufficient funds\n");
    } else {
        printf("Withdrew %.2f\n", amt_4);
    }
    printf("Balance: %.2f\n", get_balance(account));

    // destroy the account using destroy_account() and print "Account %d closed"
    destroy_account(account);
    printf("Account %d closed\n", account_id);
    return 0;
}
