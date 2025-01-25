#include <stdio.h>

int main() {
    char ch[30];
    int age;
    char sd[20];
    scanf("%s %d %s", ch, &age, sd);
    printf("Name: %s", ch);
    printf("Age: %d", age);
    printf("Hobby: %s", sd);
    return 0;
}