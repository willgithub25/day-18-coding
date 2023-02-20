#include <stdio.h>

int main() {
    int n, i = 0, highest, second_highest, num;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    printf("Enter the integers: ");
    scanf("%d", &highest);
    scanf("%d", &second_highest);

    if(highest < second_highest) {
        int temp = highest;
        highest = second_highest;
        second_highest = temp;
    }

    i = 2;
    while(i < n) {
        scanf("%d", &num);
        if(num > highest) {
            second_highest = highest;
            highest = num;
        }
        else if(num > second_highest) {
            second_highest = num;
        }
        i++;
    }

    printf("Second highest is %d", second_highest);
    return 0;
}
