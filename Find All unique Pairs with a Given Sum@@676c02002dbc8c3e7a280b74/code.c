#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int T, printed = 0;
    scanf("%d", &T);
    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            if(arr[i] + arr[j] == T) {
                printf("%d %d\n", arr[i], arr[j]);
                printed = 1;
                return 0;
                
            }
        }
    }
    return 0;

}