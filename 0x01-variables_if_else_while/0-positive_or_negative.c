#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void) {
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("Last digit of %d is ", n);

    int lastDigit = abs(n % 10);
    int sign = (n < 0) ? -1 : 1;

    if (lastDigit > 5) {
        printf("%d and is greater than 5", lastDigit);
    } else if (lastDigit == 0) {
        printf("%d and is 0", lastDigit);
    } else {
        printf("%d and is less than 6 and not 0", lastDigit);
    }

    return 0;
}
