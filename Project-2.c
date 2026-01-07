#include<stdio.h>
int main()    {
                            //* 1st way of doing is : Grade calculation using Ternary operator *//
            int  num;
            char grade;
                printf("Enter your score :\n");
                scanf("%d", &num); 
                grade = (num >=90)? 'A':
                        (num >=80)? 'B':
                        (num >=70)? 'c':
                        (num >=60)? 'D':
                        (num>=50)? 'E': 'F';
                        printf("Your grade is %c ", grade); 

     // 2nd way of doing is : Grade calculation using Switch Case operators *//
                switch(grade){
                    case 'A':
                          printf("Excellent work\n");
                          break;
                    case 'B': 
                          printf("Well Done\n");
                          break;
                    case 'c':
                          printf("Good Job");
                          break;
                    case 'D':
                          printf("You passed, but you could do better"); 
                          break;
                    case 'E':
                          printf("You are passed with Grazing marks these time");
                          break;
                    case 'F': 
                          printf("Sorry You are Failed better luck next-time!");
                          break;
                }
            //   #3rd way of doing is : Grade calculation using if-else // 

            if(grade == 'F'){
                printf("please try again next time");
            }
            else {
                printf("You are eligible for the next level");
            }
            return 0;
}