#include <stdlib.h>
#include "account.h"

struct Account {
    int id;
    double balance;
};

Account* create_account(int account_id) {
    // allocate memory for a new Account using malloc
    Account* account = malloc(sizeof(Account));
    // check if memory allocation was successful
    if (account == NULL) {
        return NULL;
    }
    // initialize the Account, setting the acccount_id passed in
    // set new account to zero
    account->id = account_id;
    account->balance = 0.0;
    // return pointer to new account struct / object
    return account;
}

// deposit implementation, returns 0 if unsuccessful, 1 if successful
int deposit(Account* account, double amount) {
    if (account == NULL || amount <= 0) {
        return 0;
    }
    account->balance += amount;
    return 1;
}

// withdraw function that takes Account pointer and double amount
// withdraw returns an integer (1 for success, 0 for invalid)
int withdraw(Account* account, double amount) {
    if (account == NULL || amount <= 0) {
        return 0;
    }
    if (account->balance < amount || amount < 0) {
        return 0;
    }
    account->balance -= amount;
    return 1;
}

// account balance getter
double get_balance(const Account* account) {
    if (account == NULL) {
        return -999999999999999999;
    }
    return account->balance;
}

void destroy_account(Account* account) {
    // free the account memory, first checking for a NULL pointer
    if (account == NULL) {
        return;
    }
    free(account);
}