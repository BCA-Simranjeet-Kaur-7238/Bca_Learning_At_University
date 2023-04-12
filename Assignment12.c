//Input marks of 10 students in an array and then find the student with maximum marks

#include <stdio.h>
int main() 
{
    int marks[10], maximum_marks = 0, max_index = 0;
    printf("PLEASE ENTER THE MARKS OF 10 STUDENTS HERE:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
        if (marks[i] > maximum_marks) {
            maximum_marks = marks[i];
            max_index = i;
        }
    }
    printf("STUDENT : %d HAS SCORED HIGHEST MARKS  i.e : %d\n", max_index + 1, maximum_marks);
    return 0;
}
