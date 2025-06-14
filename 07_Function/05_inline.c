#include <stdio.h>

// Inline function in C
static inline int foo()
{
	return 2;
}
int main()
{

	int ret;

	// inline function call
	ret = foo();

	printf("Output is: %d\n", ret);
	return 0;
}

// Output is: 2
  
