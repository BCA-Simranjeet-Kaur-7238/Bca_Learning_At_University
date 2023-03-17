//Can you help your digital design faculty in correcting the assignment on number conversions by writing a program to convert a decimal number to its binary equivalent using a while loop.
//Example, lets say input is 7, output should be 111

#include <stdio.h>
int main() {
    int decimal, binary=0, remainder, place=1;
    
    printf("\n\t ENTER THE DECIMAL NUMBER HERE : ");
    scanf("%d", &decimal);
    
    while (decimal != 0) {
        remainder = decimal % 2;
        binary += remainder * place;
        place *= 10;
        decimal /= 2;
    }
    printf("\n\t BINARY EQUIVILANT OF THE NUMBER ENTERED IS : %d\n", binary);
    return 0;
}
