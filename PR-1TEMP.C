#include<stdio.h>
#include<conio.h>
#define PI 3.14

  main()   {
		  int    celcius;
		  float  fahrenheit;
		  clrscr();
		  printf("Enter the value of celcius:");
		  scanf("%d", &celcius);
		  fahrenheit=(9/5*celcius)+61;
		  printf("temperature in fahrenheit is %.f", fahrenheit);
		  getch();

 }