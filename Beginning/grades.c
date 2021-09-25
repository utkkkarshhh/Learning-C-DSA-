#include <stdio.h>

int main ()
{
    int marks;
    char grade;
    
    printf("Enter your marks: ");
    scanf("%d", marks);
    
    if (marks >= 80) {
        grade = 'A';
    }
    else if (marks < 80 && marks >= 60) {
        grade = 'B';
    }
    else if (marks < 60 && marks >= 50) {
        grade = 'C';
    }
    else if (marks < 50 && marks >= 40) {
        grade = 'D';
    }
    else {
        grade = 'E';
    }
    printf("Grade is: %c", grade);
}