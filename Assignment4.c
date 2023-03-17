//Write a C code to find the maximum element in each row of the 3 X 3 matrix

#include <stdio.h>
int main() {
	int i,j;
    int matrix[3][3];
    printf(" ENTER THE ELEMENTS OF 3X3 MATRIX :\n");
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }
    // find maximum element in each row
    for (int i = 0; i < 3; i++) 
	{
        int max = matrix[i][0];
        for (int j = 1; j < 3; j++) 
		{
            if (matrix[i][j] > max) 
			{
                max = matrix[i][j];
            }
        }
        printf("\n Maximum element in the row is %d: %d\n", i+1, max);
    }
    return 0;
}
