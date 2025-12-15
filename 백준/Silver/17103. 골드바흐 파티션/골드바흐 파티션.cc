#include <iostream>

using namespace std;

// 1. 최대 범위 설정 (문제에 따라 100만 등으로 조절)
const int MAX = 1000001; 
bool check[MAX]; // true면 소수, false면 소수 아님

// 에라토스테네스의 체 (미리 표 만들기)
void sieve() {
    // 일단 전부 소수(true)라고 설정
    for(int i = 2; i < MAX; i++) {
        check[i] = true;
    }

    // 소수가 아닌 것들 지우기
    for(int i = 2; i * i < MAX; i++) {
        if(check[i] == true) { // 소수라면
            // 그 수의 배수들은 모두 지움 (false)
            for(int j = i * i; j < MAX; j += i) {
                check[j] = false;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // 프로그램 시작하자마자 딱 1번만 실행!
    sieve(); 

    int T, N;
    cin >> T;
    
    for(int i = 0; i < T; i++){
        int count = 0;
        cin >> N;
        
        for(int j = 2; j <= N / 2; j++){
            // 함수 호출 isPrime(j) 대신 -> 배열 확인 check[j] 로 변경
            if(check[j] == true && check[N - j] == true){
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}