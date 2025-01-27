#include <stdio.h>

int main() {
    int x, y;
    char operator;
    scanf("%d %d %c", &x, &y, &operator);
    if (operator == '+') {
        printf("%d", x + y);
    } else if (operator == '-') {
        printf("%d", x - y);
    } else {
        printf("Invalid");
    }
    return 0;
}