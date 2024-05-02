#include <stdio.h>

int main() {
    char customer[30], acctNum[30];
    double avgBalance, interest, service;
    int numTrans;

    // Input
    printf("Name? ");
    fgets(customer, sizeof(customer), stdin);

    printf("Account number? ");
    fgets(acctNum, sizeof(acctNum), stdin);

    printf("Average balance? ");
    scanf("%lf", &avgBalance);

    printf("Number of transactions? ");
    scanf("%d", &numTrans);

    // Calculate interest and service charges
    interest = avgBalance * 0.06;
    service = numTrans * 0.50;

    // Output
    printf("\nName: %s", customer);
    printf("Account number: %s", acctNum);
    printf("Average balance: $%.2f\n", avgBalance);
    printf("Interest: $%.2f\n", interest);
    printf("Service charge: $%.2f\n", service);

    return 0;
}
