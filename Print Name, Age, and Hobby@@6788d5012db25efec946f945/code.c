#include <stdio.h>

int main() {
    char ch[30];
    int a;
    char sd[20];
    scanf("%s %d %s", ch, &a, sd);
    printf("Name: %s\n", ch);
    printf("Age: %d\n", a);
    printf("Hobby: %s\n", sd);
    return 0;
}