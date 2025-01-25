#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    float result = (x + y + z) / 3;
    printf("Average: %f", result);
    return 0;
}