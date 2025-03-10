#include <stdio.h>
int main() {
    int N, K;
    scanf("%d", &N);
    scanf("%d", &K);
    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int Count = 0;
    for(int i = 0; i < N; i++) {
        if(arr[i] > K) {
            Count += 1;
        }
    }
    printf("%d", Count);

}