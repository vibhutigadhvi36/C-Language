#include<stdio.h>

int main(){

    char name[50];
    int rollnumber;
    int subject1, subject2, subject3;
    float percentage, totalmarks;
    char grade;

    printf("Enter Student Name :");
    scanf("%s", &name);

    printf("Enter Roll Number :");
    scanf("%d", &rollnumber);

    printf("\n ------Enter marks for 3 subjects------\n");

    printf("Enter marks for Subject 1 (out of 100):");
    scanf("%d", &subject1);

    printf("Enter marks for Subject 2 (out of 100):");
    scanf("%d", &subject2);

    printf("Enter marks for Subject 3 (out of 100):");
    scanf("%d", &subject3);

    totalmarks = subject1 + subject2 + subject3 ;

    percentage = (totalmarks / 300) * 100;
    printf("total marks = %f" , &totalmarks);


    if (percentage >= 75) {
        grade = 'A';
    }

    else if (percentage >= 60) {
        grade = 'B';
    }
    else if (percentage >= 40) {
        grade = 'C';
    }
    else {
        grade = 'F';
    }


    printf("\n================**********************=================\n");
    printf("                   STUDENT REPORT CARD\n");
    printf("\n================**********************=================\n");


    printf("total marks = %f\n", totalmarks);

printf("Student Name :- %s\n", name);
printf("Roll Number :- %d\n", rollnumber);

printf("Subject - 1 :- %d\n", subject1);
printf("Subject - 2 :- %d\n", subject2);
printf("Subject - 3 :- %d\n", subject3);

printf("Total Marks : %f\n", totalmarks);
printf("Percentage : %f\n", percentage);
printf("Grade : %c\n", grade);

    printf("\n---RESULT---\n");

    if (percentage >= 40) {
        printf("Result: PASS\n");
        printf("Congratulations! You have passed.\n");
    }
    else {
        printf("Result: FAIL\n");
        printf("Better luck next time!\n");
    }

    printf("\n===========================================================\n");


    return 0; 
}