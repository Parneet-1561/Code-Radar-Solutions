#include <stdio.h>
void reverse(int arr[], int s, int l) {
    for(int i = s, j = l; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int K;
    scanf("%d", &K);
    reverse(arr, 0, N - 1);
    reverse(arr, 0, K - 1);
    reverse(arr, K, N - 1)

    for(int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
}