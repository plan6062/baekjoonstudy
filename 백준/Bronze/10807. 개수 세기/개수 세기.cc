#include <stdio.h>

int main(){
    int N, V;
    int arr[100];
    int count = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d", &V);

    for (int i = 0; i < N; i++){
        if ( arr[i] == V ){
            count ++;
        }
    }

    printf("%d", count);
}