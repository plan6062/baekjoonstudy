#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int result = 0; // 봉지 개수 카운트

    // N이 0보다 크거나 같은 동안 반복
    while (N >= 0) {
        // 1. 5로 딱 나누어 떨어지면 -> 남은 건 전부 5kg 봉지로 처리하고 끝!
        if (N % 5 == 0) {
            result += (N / 5);
            cout << result;
            return 0;
        }
        
        // 2. 5로 안 나누어 떨어지면 -> 3kg 봉지 하나 사용
        N -= 3;
        result++;
    }

    // 반복문이 끝났는데도 리턴을 못 했다면 (N이 음수가 됨) -> 불가능
    cout << -1;
    return 0;
}