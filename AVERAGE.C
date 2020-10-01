// A simple program to take average of 3 numbers entered by user.

// Including header files.
#include<stdio.h>
#include<conio.h>

// Declaring the main function.
void main() {
	// Declaring the variables.
	float num1,num2,num3,avg;

	// Clearing the screen.
	clrscr();

	// Taking input from user.
	printf("Please Enter the numbers.\n");
	printf("num1: ");
	scanf("%f",&num1);
	printf("num2: ");
	scanf("%f",&num2);
	printf("num3: ");
	scanf("%f",&num3);

	// Taking average of the numbers.
	avg = (num1 + num2 + num3) / 3;

	// Printing the value of average.
	printf("Average of the above numbers is %0.2f",avg);
	getch();
}
