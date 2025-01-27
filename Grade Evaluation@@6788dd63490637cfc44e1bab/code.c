#include <stdio.h>

int main() {
    char xh[100];
    scanf("%c", &xh);
    if (xh == 'A') {
        printf("Excellent");
    } else if (xh == 'B') {
        printf("Good");
    }
    return 0;
}