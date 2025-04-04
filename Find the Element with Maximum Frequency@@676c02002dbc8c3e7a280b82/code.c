#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int maxEle = arr[0], maxfreq = 0;
    
    for(int i = 0; i < N; i++) {
        int count = 0;
        for(int j = i + 1; j < N; j++) {
            if(arr[i] == arr[j]) {
                count++;
                break;
            }
        }
        if(count > maxfreq) {
            maxfreq = count;
            maxEle = arr[i];
        }
        printf("%d", maxEle);
    }

}