#include <stdio.h>
#include <stdint.h>

int main() {
	uint16_t v = 426;
	// print 'Yeah!' if dividable by 4 but print 'End of program' after regardless
	if (v % 4 == 0)
        printf("%s\n", "Yeah!");
    printf("%s\n", "End of program");
	return 0;
}
