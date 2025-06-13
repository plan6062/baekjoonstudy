#include <stdio.h>
#include <string.h>

int main() {
    int T;
    char str[1001]; // 문자열 길이가 1000보다 작으므로 1001로 설정
    
    // 테스트 케이스 개수 입력
    scanf("%d", &T);
    
    // 각 테스트 케이스 처리
    for (int i = 0; i < T; i++) {
        scanf("%s", str);
        
        int len = strlen(str);
        
        // 첫 글자와 마지막 글자 출력
        printf("%c%c\n", str[0], str[len-1]);
    }
    
    return 0;
}