#include <stdio.h>

int main() {
    int n, i = 1, lowest, num;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    printf("Enter the integers: ");
    scanf("%d", &lowest);

    while(i < n) {
        scanf("%d", &num);
        if(num < lowest) {
            lowest = num;
        }
        i++;
    }

    printf("Lowest is %d", lowest);
    return 0;
}
