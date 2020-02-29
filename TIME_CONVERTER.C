// Simple program to convert seconds to days,hours,minute,sec.

// Including the header files.
#include<stdio.h>
#include<conio.h>

// Declaring the main function.
void main() {
	// Declaring the variable.
	long int s,m,h,d;

	// Clearing the screen.
	clrscr();

	// Taking input from user.
	printf("Enter times in Second: ");
	scanf("%ld",&s);

	// Converting the seconds in to days, hours, minutes.
	d = s / (86400);
	s = s % (86400);
	h = s / 3600;
	s = s % 3600;
	m = s / 60;
	s = s % 60;

	// Printing the results obtained.
	printf("Days: %ld\nHours: %ld\nMinutes: %ld\nSeconds: %ld",d,h,m,s);
	getch();
}