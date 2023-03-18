//Write a C program that allows the user to enter 'N' numbers and find the total positive numbers and total negative numbers using a for loop.

#include <stdio.h>
int main()
{
    int n, num, positive_num=0, negative_num = 0;
    printf(" PLEASE ENTER THE VALUE OF 'N' HERE :");
    scanf("%d", &n);
    printf("\n");
    
    for (int i = 0; i < n; i++) {
        printf("\tEnter the Number %d: ", i+1);
        scanf("%d", &num);
        
        if (num > 0) 
		{
        positive_num++;
        } else if (num < 0) 
		{
        negative_num++;
        }
}
    printf("\n\tTotal Number of Positive Numbers Entered are : %d\n\n", positive_num);
    printf("\tTotal Numbers of Negative Numbers Entered are  : %d\n", negative_num);
    return 0;
}

