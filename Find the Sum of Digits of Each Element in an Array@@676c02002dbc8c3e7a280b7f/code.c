#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < n; i++) {
        int sum = 0;
        int num = arr[i];
        while(arr[i] != 0) {
            digit = num % 10;
            sum += digit;
            num /= 10;
        }
        printf("%d ", sum);
    }
    return 0;
    
}