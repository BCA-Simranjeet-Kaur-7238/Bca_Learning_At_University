//Convert an decimal to its binary equivalent using a bitwise operator
//int main(){
  //int N = 7;
  //return 0;}


#include <stdio.h>
int main() {
    int N = 7;
    int binary[32];
    int i,j;
    for (i = 0; N > 0; i++) {
        binary[i] = N & 1;
        N = N >> 1;
    }
    printf("BINARY EQUIVALENT OF 7 IS : ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    return 0;
}
