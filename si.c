// Simple interest calculator with initializer and printing with format specifier
#include <stdio.h>

int main()
{
    int principal = 1000;
    int rate = 5;
    int time = 2;
    int simple_interest = (principal * rate * time) / 100;

    printf("Principal Amount: %d\n", principal);
    printf("Rate of Interest: %d%%\n", rate);
    printf("Time Period: %d years\n", time);
    printf("Simple Interest: %d\n", simple_interest);

    return 0;
}
