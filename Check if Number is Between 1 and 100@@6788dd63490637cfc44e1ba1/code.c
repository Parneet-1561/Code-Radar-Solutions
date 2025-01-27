#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    if (x > 0 && x < 100) {
        printf("In Range");
    } else {
        printf("Out of Range");
    }
    return 0;
}