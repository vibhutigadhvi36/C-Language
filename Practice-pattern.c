// #include<stdio.h>
// int main(){

//     int i, j, n;
//     printf("Enter a number here :");
//     scanf("%d" , &n);
//     for(i=1; i<=n; i++){
//         for(j=1; j<=n; j++){
//             printf("%d " , j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Squar Pattern.......


// #include <stdio.h>
// int main (){

//     int i, j, n;
//          printf("Enter a Num : ");
//          scanf("%d", &n);
//             for(i=1; i<=n; i++){
//                 for(j=1; j<=n; j++){

//                       printf("%d ", j);
//                 }
//                 printf("\n");
//             }
//             return 0;
// }


// Right Angle Triangle......

// #include <stdio.h>
// int main (){
//             int i, j, n;

//                  printf("Enter a Number here :");
//                  scanf("%d", &n);
//                     for(i=1; i<=n; i++){
//                         for(j=1; j<=i; j++){
//                              printf("%d ", j);
//                         }
//                         printf("\n");
//                     }
//                        return 0;     

// } 

// Left Angle Triangle......

// #include <stdio.h>
// int main(){

//             int i, j, n;
//             printf("enter a nuber : ");
//             scanf("%d", &n);

//             for(i=1; i<=n; i++){
//                 for(j=1; j<=n-i; j++){
//                     printf("  ");
//                 }
//                 for(j=1; j<=i; j++){
//                     printf("%d ", j);
//                 }
//                 printf("\n");
//             }
//                 return 0; 
// }   
// Pyramid Treiangle 

#include<stdio.h>
int main(){
            int i,j,n,k; 
            printf("Enter a number here ");
            scanf("%d", &n);

            for(i=1; i<=n; i++){
                for(k=1; k<=n-i; k++){
                    printf(" ");
                }
                for(j=1; j<=i; j++){
                printf("%d ",j);
                }
                printf("\n");
            }
         return 0;   
}



