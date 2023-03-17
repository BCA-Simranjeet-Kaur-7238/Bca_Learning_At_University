//A number is said to be valid if it is divisible by 8. Write a program that allows the user to keep entering numbers as long as the input is valid and also displays a count of the valid numbers. Use a while loop to complete the task

#include <stdio.h>
int main() {
    int num, count = 0;
    printf(" PLEASE ENTER A NUMBER: ");
    scanf("%d", &num);
    while (num != 0) {
        if (num % 8 == 0) {
            count++;
        } else {
            printf("\n\t%d is not divisible by 8,so here it exits.\n", num);
            break;
        }
        printf(" ENTER ANOTHER NUMBER: ");
        scanf("%d", &num);
    }
    printf("\n\tTotal valid numbers entered: %d\n", count);
    return 0;
}
