#include <stdio.h>

int estimateCIBILScore(double loanAmount) {
    if (loanAmount <= 10000) {
        return 750; // Good score
    } else if (loanAmount <= 30000) {
        return 700; // Average score
    } else if (loanAmount <= 50000) {
        return 650; // Below average score
    } else {
        return 600; // Poor score
    }
}

int main() {
    double loanAmount;
    
    printf("Enter the loan amount: ");
    scanf("%lf", &loanAmount);

    int score = estimateCIBILScore(loanAmount);
    printf("Estimated CIBIL Score: %d\n", score);

    return 0;
}
