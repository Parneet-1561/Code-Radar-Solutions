#include <stdio.h>
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
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
    k = k % N;
    reverse(arr, 0, N - 1);    
    reverse(arr, 0, K - 1);     // Reverse first K elements
    reverse(arr, K, N - 1);     // Reverse remaining elements

    
    for(int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    
}
