#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0, digit;
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            digit = arr[i] % 10;
            sum += arr[i];
            arr[i] /= 10;
        }
    }
    for(int i = 0; i < n; i++) {
        printf("%d", sum);
    }
    
}