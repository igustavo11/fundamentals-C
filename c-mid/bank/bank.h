#ifndef BANK_H
#define BANK_H

struct AccountBank{
    int id;
    char holder[50];
    float balance;
};
void Deposit(struct AccountBank *value, float salary);

#endif
