#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int Ispalindrome = 1;
    for(int i = 0, j = N - 1; i < j; i++, j--) {
        if(arr[i] != arr[j]) {
            Ispalindrome = 0;
            break;
        }
    }
    if(Ispalindrome) {
        printf("YES");
    } else {
        printf("NO");
    }
}