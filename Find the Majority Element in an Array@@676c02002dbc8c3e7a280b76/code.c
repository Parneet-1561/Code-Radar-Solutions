#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int major = arr[0], maxfre = 0;
    for(int i = 0; i < n; i++) {
        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]){
                count++;
                break;
            }
        }
        if(count > maxfre) {
            maxfre = count;
            major = arr[i];
        }
    }
    printf("%d", major);
}