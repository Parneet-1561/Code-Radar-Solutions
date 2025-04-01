#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int major = -1, maxfre = 0;
    for(int i = 0; i < n; i++) {
        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]){
                count++;
                break;
            }
        }
        if(count > n/2) {
            major = arr[i];
            break;
        } 
        
    }
    printf("%d", major);
}