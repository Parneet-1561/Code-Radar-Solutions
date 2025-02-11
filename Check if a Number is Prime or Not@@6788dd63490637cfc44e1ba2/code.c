#include <stdio.h>

int main() {
    int n, isprime = 1;
    scanf("%d", &n);
    if (n <= 0) return 0;
    else {
        for(int i = 2; i <= n; i++) {
        if(n % i == 0) {
            isprime = 0;
            break;
        }
        if(isPrime) {
            printf("Prime");
        } else {
            printf(Not Prime);
        }
        
    }
    }
    return 0;
}