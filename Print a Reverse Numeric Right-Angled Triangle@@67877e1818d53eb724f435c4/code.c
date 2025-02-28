#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for(int i = N; i >= i; i--) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}