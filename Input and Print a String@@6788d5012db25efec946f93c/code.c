#include <stdio.h>

int main() {
    char ch[50];
    scanf("%49s", ch);
    printf("You entered: %s", &ch);
    return 0;
}