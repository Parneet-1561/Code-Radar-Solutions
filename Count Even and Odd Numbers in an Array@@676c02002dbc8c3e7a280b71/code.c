#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int SumEven=0, SumOdd = 0;
    for(int i = 0; i < N; i++) {
        if(arr[i] % 2 == 0) {
            SumEven += 1;
        } else {
            SumOdd += 1;
        }
    }
    printf("%d %d", SumEven, SumOdd);
}