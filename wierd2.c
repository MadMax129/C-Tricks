#include <stdio.h>

/*
	Since each enum has an integer of 4 bytes 4 characters can be set.
	However the value will be a wierd integer

*/
enum 
{
	HEY = 'HEY',
	FOUR = 'FOUR',
};

struct Test {
	// After : equals to amount of bits for int
	// In this case bit can be a (0-1)
	unsigned int bit:1; 
};

void typeFunction(int* values) 
{

}

void foo()
{
	puts("FOO");
}

// Create a struct in a return type
struct Test1 { int i; } function(void) {
	struct Test1 t = {0};
	return t;
}

// Strange function declaration
// Declares the function 'what' with 0 parameters
// and returns a pointer to a array of 3 ints 
int (*what(void))[3];

int main()
{
	//------------------------------------------------
	// Loop with an extra comma calling the function each loop cycle
	for (int i=0; i<10; i++, foo())
	{
  		puts("LOOP");
	}
	//------------------------------------------------
	//------------------------------------------------
	// Calling function declared above and putting in elements for the int* 
	// Using this strange syntax
	typeFunction((int[]){1,2,3,4,0});
	//------------------------------------------------
	//------------------------------------------------
	// Strange printf formtting trick
	int a = 2;
    float b = 6.4123333;
    // Once printf sees a 2 it will ignore the next numbers
    printf("%.*f\n",a,b);
    //------------------------------------------------

	return 0;
}