#include <iostream>

int main() {
    printf("x value y value Expressions  Result\n");
    printf("%d |    %d |     x=y+3        |x=%d\n", 10, 5, 5+3);
    printf("%d |    %d |     x=y-2        |x=%d\n", 10, 5, 5-2);
    printf("%d |    %d |     x=y*5        |x=%d\n", 10, 5, 5*5);
    printf("%d |    %d |     x=x/y        |x=%d\n", 10, 5, 10/5);
    printf("%d |    %d |     x=x%%%y        |x=%d\n", 10, 5, 10%5);
    return 0;
}