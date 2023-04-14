//Write a code find the length of a string and its reverse equivalent without using readymade c functions

#include <stdio.h>

int main() {
    char str[100], reverse[100];
    int i,length = 0, rev_len = 0;

    printf("ENTER A STRING: ");
    scanf("%s", str);

    // find length of string using for loop
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }
    
	// find length of reverse string using for loop
    for (i = length - 1; i >= 0; i--) {
        reverse[rev_len] = str[i];
        rev_len++;
    }
    reverse[rev_len] = '\0';

    printf("\nLENGTH OF STRING: %d\n", length);
    printf("\nREVERSE EQUIVALENT: %s\n", reverse);
	
    return 0;
}
