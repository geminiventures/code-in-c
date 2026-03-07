// Add include guards using ACCOUNT_H

#ifndef ACCOUNT_H
#define ACCOUNT_H

// Declare an opaque Account type using forward declaration
// (incomplete type - just declare that the struct exists, no body)
typedef struct Account Account;
// Declare function prototype for create_account
// - Takes an integer for account ID
// - Returns a pointer to Account
Account *create_account(int id);
// Declare function prototype for destroy_account
// - Takes a pointer to Account
// - Returns nothing (void)

// deposit function that takes an Account pointer and a double amount
// deposit returns an integer (1 for success, 0 for invalid)
int deposit(Account *account, double amount);

// withdraw function that takes Account pointer and double amount
// withdraw returns an integer (1 for success, 0 for invalid)
int withdraw(Account *account, double amount);

// account balance getter
double get_balance(const Account *account);


void destroy_account(Account *account);
// Close include guards
#endif
