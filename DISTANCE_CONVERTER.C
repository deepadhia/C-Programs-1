// A simple program to convert cm into km,m.

// Including the header files.
#include<stdio.h>
#include<conio.h>

// Declaring the main function.
void main() {
	// Declaring variables.
	long int cm,m,km;

	// Clearing the screen.
	clrscr();

	// Taking Input from the user.
	printf("Enter Distance in cm: ");
	scanf("%ld",&cm);

	// Conerting the cm into km,m.
	km = cm / 100000;
	cm = cm % 100000;
	m = cm / 100;
	cm = cm % 100;

	// Displaying the final results.
	printf("Km:%ld\nM: %ld\nCm: %ld\n",km,m,cm);
	getch();
}