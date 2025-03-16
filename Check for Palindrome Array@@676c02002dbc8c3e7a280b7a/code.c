#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int Ispalindrome = 1;
    int i = 0, j = N - 1;
    while(i < j) {
        if(arr[i] != arr[j]) {
            Ispalindrome = 0;
            break;
        }
        i++;
        j--;
    }
    if(Ispalindrome) {
        printf("YES");
    } else {
        printf("NO");
    }
}