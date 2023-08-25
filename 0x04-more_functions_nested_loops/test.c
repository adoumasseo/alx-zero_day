#include <stdio.h>

int main() {
    long long int number = 612852475143;
    long long int i;

    for (i = 2; i <= number; i++) {
        while (number % i == 0) {
            number /= i;
	    printf("%lld\n", i);
        }
    }

    printf("The largest prime factor of 612852475143 is: %lld\n", i - 1);

    return 0;
}
