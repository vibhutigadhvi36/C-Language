#include<stdio.h>
#include<conio.h>

int main()   {
                int  num;
                printf("Enter a number :");
                scanf("%d", &num);
                if(num < 0) {
                    printf("These number is Negative");
                }
                else if (num == 0) {
                    printf("These number is Neutral");
                }
                else {
                    printf("These number is Positive");
                }
                return 0;


}