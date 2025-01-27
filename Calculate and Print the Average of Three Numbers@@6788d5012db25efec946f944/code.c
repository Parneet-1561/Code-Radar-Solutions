#include <stdio.h>

int main() {
    float x, y, z;
    scanf("%f %f %f", &x, &y, &z);
    float result = (x + y + z) / 3;
    printf("Average: %.2f", result);
    return 0;
}