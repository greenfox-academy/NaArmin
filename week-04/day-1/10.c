#include <stdio.h>

void swap(int *a, int *b);

int main()
{
	int x, y;
	x = 5;
	y = 8;
	printf("Before Swapping\nx = %d\ny = %d\n", x, y);

	//TODO: write a function which swaps the values of x and y. Then print out the values of x and y.
    swap(&x, &y);
    printf("After swap\n x = %d,\n y = %d.", x, y);
	return 0;
}
void swap(int *a, int *b)
{
    int tempnum = *a;
    *a = *b;
    *b = tempnum;
    return;
}

