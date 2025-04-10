#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int count = 0, isprime = 1;
    for(int i = 0; i < n; i++) {
        if(arr[i] < 2) {
            printf("Not valid");
        } else if(arr[i] > 2) {
            for(int j = 2; j * j <= arr[i]; j++) {
                if(arr[i] % j == 0) {
                    isprime = 0;
                    break;
                } else {
                    isprime = 1;
                    count++;
                }
            }
        }
        
    }
    printf("%d", count);
}