#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n <= 0) return 0;
    for(int i = 2; i <= n - 1; i++) {
        if(n % i == 0) {
            printf("Not Prime");
            break;
        }
        printf("Prime");
    }
    
    return 0;
}