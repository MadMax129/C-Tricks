#include <stdio.h>

// Assigns l to the first character of hello
char E = 1["Hello"];

int *op1[3];    // Array of three pointers to ints 
int (* op2)[3]; // Pointer to array of three ints

int get() {return 2;}


enum Str {Hi, Bye, Ok};
// This puts the string into the element of the enum value
static char *table[] = { 
	[Hi]  ="hello", // this is table[0]
	[Bye] ="bye", // this is table[1]
	[Ok]  ="ok"
};

int main()
{
	printf("==>%c\n", E);

	// Set i equal to functions return value
	for(int i = ({get();}); i < 10; i++)
		printf("%d\n", i);
}
