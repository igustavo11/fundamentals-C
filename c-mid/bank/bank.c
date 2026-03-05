#include "bank.h"
void Deposit(struct AccountBank *value, float salary){
    float d = value->balance + salary;
    value->balance = d;
}