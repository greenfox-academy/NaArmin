#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i_array[10] = {260, 259, 258, 257, 256, 255, 254, 253, 252, 251};
    unsigned char uc_array[10];

	//TODO: write a program, which copies the values from the given array to an unsigned char array
    //print out the elements of the unsigned char array, with the "%d" format specifier
    //what do you see?
	for (int i = 0; i < (sizeof(i_array) / sizeof(i_array[0])); i++)
        uc_array[i] = i_array[i];
    for (int i = 0; i < (sizeof(uc_array) / sizeof(uc_array[0])); i++)
        printf("%d, ", uc_array[i]);

    return 0;
}
