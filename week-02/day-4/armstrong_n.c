#include <stdio.h>
#include <tgmath.h>

int main()
{
    //Write a simple program to check if a given number is an armstrong number. The program should ask for a number. E.g. if we type 371, the program should print out: The 371 is an Armstrong number.
    int digit = 1;
    int sum = 0;
    int num;
    int tmp;
    printf("Give a number to test whether it's an Armstrong number: ");
    scanf("%d", &num);
    tmp = num;
    while (tmp >= 10) {
        digit++;
        tmp /= 10;
    }
    printf("The %d is ", num);
  //  tmp = num;
    for (int i = digit; i > 0; i--) {
        tmp = num / pow(10, (i - 1));
        sum += pow(tmp, digit);
        printf("%d , ", num);
        num = num - tmp * pow(10, (i - 1)); //this is the problematic line
    }
        printf("s%d", sum);
    return 0;
}

