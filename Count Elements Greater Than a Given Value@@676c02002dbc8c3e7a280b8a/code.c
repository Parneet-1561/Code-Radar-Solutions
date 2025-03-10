#include <stdio.h>
int main() {
    int N, k;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int Count = 0;
    for(int i = 0; i < N; i++) {
        if(arr[i] > k) {
            Count += 1;
        }
    }
    printf("%d", Count);

}