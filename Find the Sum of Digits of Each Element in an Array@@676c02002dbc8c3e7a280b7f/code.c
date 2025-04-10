#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < n; i++) {
        int sum = 0, digit;
        int num = arr[i];
        if(num < 0) {
            num = -num;
        }
        while(num != 0) {
            digit = num % 10;
            sum += digit;
            num /= 10;
        }
        printf("%d ", sum);
    }
    return 0;
    
}