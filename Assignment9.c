//Write a C code to find the frequency of each letter in the name
//Sample Input: Raman
//Output: R - 1
//.       a = 2
//.       m = 1
//.       n = 1


#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int count[100] = {0}; // initialize all elements to 0
    int i, length;
    
    printf("Enter the name: ");
    scanf("%s", name);
    length = strlen(name);
    
    // to count the frequency of each letter in the name
    for (i = 0; i < length; i++) {
        count[name[i] - 'a']++;
    }
    
    // to print the frequency of each letter
    for (i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c - %d\n", 'a' + i, count[i]);
        }
    }
    return 0;
}
