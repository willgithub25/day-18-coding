#include <stdio.h>

int main() {
    int n, i = 2, is_prime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 2) {
        printf("NOT PRIME");
        return 0;
    }

    if(n == 2) {
        printf("PRIME");
        return 0;
    }

    while( i <= n/2) {
        if(n % i == 0) {
            is_prime = 0;
            break;
        }
        i++;
    }

    if(is_prime == 1) {
        printf("PRIME");
    }
    else {
        printf("NOT PRIME");
    }

    return 0;
}
