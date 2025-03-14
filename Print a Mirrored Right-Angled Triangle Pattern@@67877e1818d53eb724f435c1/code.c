#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++) {
        for(int j = N; j <= N - i; j++) {
            printf("*");
        }
         printf("\n");
    }
   
}