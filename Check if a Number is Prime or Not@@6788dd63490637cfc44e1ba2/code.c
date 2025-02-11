#include <stdio.h>

int main() {
    int num, isprime = 1;
    scanf("%d", &num);
    if(num < 2) {
        printf("Not valid");
    }
    else {
        for(int i = 2; i <= num; i++) {
            if(i % num == 0) {
                isprime = 0;
                break;
            }
        }
        if(isprime) {
            printf("Prime");
        } else {
            printf("Not a Prime");
        }
    }
}