/* Instructor-Professor Geiger
   Ko Ko Maung
   2/20/2020
   This program request simple boolean expressions with 1 bit inputs from user and execute when the if statements are met.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;																										// Input variables
	char op;																										// The Boolean expression
	printf("Enter a simple Boolean expression with 1 bit inputs using ( a operator b): ");
	scanf("%d %c %d", &a, &op, &b);																					// Requesting the Input
	if (((op == '&') || (op == '|') || (op == '^')) && ((a == 0) || (a == 1)) && ((b == 0) || (b == 1)))			// The calculation is to process if the if conditions are met.
		switch (op)
		{
		case '&':																									// For op = &
			printf("The result is: %d \n", a & b);
			break;
		case '|':																									// For op = |
			printf("The result is: %d \n", a | b);
			break;
		case '^':																									// For op = ^
			printf("The result is: %d \n", a ^ b);
			break;
		}
	else
		if (((op != '&') && (op != '|') && (op != '^')) && ((a != 0) && (a != 1)) && ((b != 0) && (b != 1)))        // To execute when the if conditions are not met
			printf("Error: 0 vslued entered correctly \n");
		else
		{
			if ((a != 0) && (a != 1))
				printf("Error: First input (%d) has to be 0 or 1\n", a);
			if ((b != 0) && (b != 1))
				printf("Error: second input (%d) has to be 0 or 1\n", b);
			if ((op != '&') && (op != '|') && (op != '^'))
				printf("Error: invalid operator (%c) \n", op);
		}
	return 0;
}
