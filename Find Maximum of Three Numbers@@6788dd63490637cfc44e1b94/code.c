#include <stdio.h>

int main() {
    int x, y, x;
    scanf("%d %d %d", &x, &y, &z);
    if (x > y && x > z) {
        printf("%d", x);
    } 
    if (y > x && y > z) {
        printf("%d", y);
    } else {
        printf("%d", z);
    }
    return 0;
}