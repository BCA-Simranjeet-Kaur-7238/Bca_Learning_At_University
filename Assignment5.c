//Task is to find out passed as well as failed students.
//Given the score of 'N' students in the class, write a program to compute the maximum score. Use array to store the marks of the students and assume that the maximum number of students
// in a class is 50. Assume that -1 is used to indicate a student who is absent for the exam. Assume that a student should secure a minimum of 50 marks to pass the exam.

#include <stdio.h>
int main() {
    int marks[50], n, max_score = -1, passed = 0, failed = 0;
    printf("ENTER THE NUMBER OF STUDENTS (maximum 50): ");
    scanf("%d", &n);
    
    printf("\nENTER THE MARKS OF EACH STUDENT HERE:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        if (marks[i] > max_score) 
		{
		max_score = marks[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (marks[i] == -1) {
            continue; // to skip absent students in exam
        }
        if (marks[i] >= 50) {
            passed++;
        } else {
            failed++;
        }
    }
    // results
    printf("\n\t Maximum score is: %d\n", max_score);
    printf("\n\t Number of students who are passed: %d\n", passed);
    printf("\n\t Number of students who are failed: %d\n", failed);
    return 0;
}
