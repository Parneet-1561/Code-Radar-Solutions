#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n], visited[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(visited[i] == 1) {
            continue;
        } else {
            count++;
        }
    }

    printf("%d %d\n",arr[i], count);
    

}