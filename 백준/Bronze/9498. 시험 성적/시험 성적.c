#include <stdio.h>

int main(){
    int A = 0;

    scanf("%d", &A);

    if (90 <= A  && A <= 100){
        printf("A");
    } else if (80 <= A && A < 90){
        printf("B");
    } else if (70 <= A && A < 80){
        printf("C");
    } else if (60 <= A && A < 70){
        printf("D");
    } else {
        printf("F");
    }
}