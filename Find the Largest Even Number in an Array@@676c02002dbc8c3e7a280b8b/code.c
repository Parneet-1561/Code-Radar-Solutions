#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int largest_even = -100000;
    for(int i = 0; i < N; i++) {
        if(arr[i] % 2 == 0 && arr[i] > largest_even) {
            largest_even =  arr[i];
        }
    }
    if(largest_even) {
        printf("%d", largest_even);
    } else {
        printf(-1);
    }
}