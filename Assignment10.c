//Write a C code to find the type of array
//If all elements in the array are odd it is known as "ODD ARRAY"
//if all elements in the array are even it is known as "EVEN ARRAY"
//if both even and odd available it is known as MIXED array


#include <stdio.h>
int findType(int n, int *arr) { //user-defined function
    int odd_count = 0;
    int even_count = 0;
    
    for(int i=0; i<n; i++) {
        if(arr[i]%2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    if(even_count == n) {
        return 1; //indicates even array
    } else if(odd_count == n) {
        return 2; //indicates odd array
    } else {
        return 3; //indicates mixed array
    }
}

int main() {
    int n;
    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("ENTER THE ELEMENTS OF ARRAY: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int arr_type = findType(n, arr);
    
    if(arr_type == 1) {
        printf("THE ARRAY IS EVEN,AS IT CONTAINS ALL THE EVEN ELEMENTS.\n");
    } else if(arr_type == 2) {
        printf("THE ARRAY IS ODD,AS IT CONTAINS ALL THE ODD ELEMENTS.\n");
    } else {
        printf("THE ARRAY IS MIXED,AS IT CONTAINS BOTH EVEN AND ODD ELEMENTS.\n");
    }
    
    return 0;
}
