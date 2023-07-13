#include <stdio.h>


/**
 * main - Prints the size of various types based on
 *the coputer it is compiled and run on..
 * Return: Always 0.
 */


int main(void)


{
	printf("Size of a char: %zu byte(s),\n",Sizeof(char));
	printf("Size of a int: %zu byte(s),\n",Sizeof(int));
	printf("Size of a long int: %zu byte(s),\n",Sizeof(long int));
	printf("Size of a long long int: %zu byte(s),\n",Sizeof(long long int));
	printf("Size of a float: %zu byte(s),\n",Sizeof(float));
	return (0);
}
