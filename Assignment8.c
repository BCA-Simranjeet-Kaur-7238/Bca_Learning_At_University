//Write a C code to sort a string in alphabetical order
//input: Anitha
//output: Aahint 

#include <stdio.h>
#include <string.h>

int main() {
   char string[100], temp;
    int length, i, j;
    
    printf("PLEASE ENTER A STRING : ");
    scanf("%s", string);
    
    length = strlen(string);
    // Sort in alphabetical order using bubble sort
    for (i = 0; i < length-1; i++) {
        for (j = 0; j < length-i-1; j++) {
            if (string[j] > string[j+1]) {
                temp = string[j];
                string[j] = string[j+1];
                string[j+1] = temp;
            }
        }
    }
    printf("SORTED STRING IS : %s\n", string);
    return 0;
}
