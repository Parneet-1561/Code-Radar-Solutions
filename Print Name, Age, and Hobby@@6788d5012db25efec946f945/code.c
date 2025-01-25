#include <stdio.h>

int main() {
    char ch[30];
    int a;
    char sd[20];
    scanf("%s %d %s", ch, &a, sd);
    printf("Name: %s", ch);
    printf("Age: %d", a);
    printf("Hobby: %s", sd);
    return 0;
}