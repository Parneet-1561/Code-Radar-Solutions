#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = arr[0], sec_larg = -1;
    for(int i = 0; i < N; i++) {
        if(arr[i] > largest) {
            sec_larg = largest;
            largest = arr[i];
        } 
    }
    
    
}