// // Question-1 
// #include<stdio.h>
// int main() {

//         int rollnumber, Totalmarks, subj1, subj2, subj3; 
//         char name[50];
//         float percentage;
//         printf("Enter a name :");
//         scanf("%s", &name);
//         printf("Enter rollnumber :\n ");
//         scanf("%d", &rollnumber); 
//         printf("Enter marks of Subj1 :\n");
//         scanf("%d", &subj1);
//          printf("Enter marks of Subj2 :\n");
//         scanf("%d", &subj2);
//          printf("Enter marks of Subj3 :\n");
//         scanf("%d", &subj3);
        
//         Totalmarks = subj1 + subj2 + subj3;
//         printf("Totalmarks is %d \n", Totalmarks);
//         percentage = (Totalmarks/300.0)*100.0; 
//         printf("percentage is %.2f", percentage); 




//         return 0; 
// } 

#include<stdio.h>

int main(){

    char name[50];
    int rollnumber;
    // int subject1, subject2, subject3;
    // float percentage, totalmarks;
    // char grade;

    printf("Enter Student Name :");
    scanf("%s", &name);

    printf("Enter Roll Number :");
    scanf("%d", &rollnumber);

    // printf("\n ------Enter marks for 3 subjects------\n");

    // printf("Enter marks for Subject 1 (out of 100):");
    // scanf("%d", &subject1);

    // printf("Enter marks for Subject 2 (out of 100):");
    // scanf("%d", &subject2);

    // printf("Enter marks for Subject 3 (out of 100):");
    // scanf("%d", &subject3);

    // totalmarks = subject1 + subject2 + subject3 ;

    // // percentage = (totalmarks / 300) * 100;
    // printf("total marks = %d" , totalmarks)


    // if (percentage >= 75) {
    //     grade = 'A';
    // }


    // if (percentage >= 60) {
    //     grade = 'B';
    // }
    // if (percentage >= 40) {
    //     grade = 'C';
    // }
    // else {
    //     grade = 'F';
    // }


    // printf("\n================**********************=================\n");
    // printf("                   STUDENT REPORT CARD\n");
    // printf("\n================**********************=================\n");


    // printf("Student Name      :- %s\n",&name);
    // printf("Roll Number       :- %d\n",&rollnumber);

    // printf("\n-------Subject Wise Marks-------\n");

    // printf("Subject - 1       :- %d\n",&subject1);
    // printf("Subject - 2       :- %d\n",&subject2);
    // printf("Subject - 3       :- %d\n",&subject3);

    // printf("------------------------\n");
    // printf("Total Marks     : %d\n", &totalmarks);
    // printf("Percentage      : %f\n", &percentage);
    // printf("Grade           : %c\n", &grade);


    // printf("\n---RESULT---\n");

    // if (percentage >= 40) {
    //     printf("Result: PASS\n");
    //     printf("Congratulations! You have passed.\n");
    // }
    // else {
    //     printf("Result: FAIL\n");
    //     printf("Better luck next time!\n");
    // }

    // printf("\n===========================================================\n");


    return 0;
}