#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int smallest = arr[0], sec_smal = -1;
    for(int i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            sec_smal = smallest;
            smallest = arr[i];            
        } else if(arr[i] > smallest) {
            if(arr[i] < sec_smal || sec_smal == -1) {
            sec_smal = arr[i];
        }
        }
    }
    printf("%d", sec_smal);

}