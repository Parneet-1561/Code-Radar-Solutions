#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int smax = arr[0];
    for(int i = 0; i < N; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    smax = max;
    for(int i = 0; i < N; i++) {
        if(arr[i] < max) {
            if(smax == max || arr[i] > smax) {
                smax = arr[i];
            }
        }
    }
    if(max ==  smax) {
        printf("%d", arr[i]);
    } else {
        printf("%d", smax);
    }
    
}