#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        for(int k = 0; k < N - i; k++) {
            printf(" ");
        }
        for(int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}
