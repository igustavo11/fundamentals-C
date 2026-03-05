#include <stdio.h>
#include <string.h>
//obj
struct AccountBank {
    int id;
    char holder[50];
    float balance;
};
//function add value for struct
void Deposit(struct AccountBank *value, float salary){
    float d = value->balance + salary;
    value->balance = d;

}

int main(){
    struct AccountBank n1;
    n1.id= 1;
    n1.balance = 0;
    strcpy(n1.holder, "Gustavo");//copy string for name 
    printf("Value account is %.2f\n", n1.balance);

    float valueDigit;//variable for input value in function

    printf("Deposit salary:\n");
    scanf("%f", &valueDigit);
    Deposit(&n1, valueDigit);

    printf("new balance for %s is %.2f\n", n1.holder, n1.balance);

    //create file txt
    FILE *filezin = fopen("recipt.txt", "w");
    if(filezin == NULL){
        printf("error\n");
        return 1;
    }
    fprintf(filezin, "---RECIPT---\n");
    fprintf(filezin, "Holder account: %s\n", n1.holder);
    fprintf(filezin, "Balance: %f\n", n1.balance);

    printf("Save file\n");
    fclose(filezin);
    return 0;
}