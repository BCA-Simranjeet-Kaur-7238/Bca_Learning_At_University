//Write a C code to find the number of distinct elements in a sorted array.

#include <stdio.h>
int main() {
    int arr[60],n, distinct_element = 1;
    printf(" PLEASE ENTER THE NUMBER OF ELEMENTS IN THE ARRAY : ");
    scanf("%d", &n);

    //enter elements in ascending or descending order 
    printf("\n ENTER THE ELEMENTS OF THE ARRAY IN SORTED ORDER HERE :\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i-1]) {
            distinct_element++;
        }
    }
    // output
    printf("\n\tNumber of distinct elements in the array: %d\n", distinct_element);
    return 0;
}
