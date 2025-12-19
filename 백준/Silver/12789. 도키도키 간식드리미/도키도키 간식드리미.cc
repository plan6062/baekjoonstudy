#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    stack<int> s; // 옆길 (대기열)
    int count = 1; // 현재 간식을 받을 차례

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;

        // 1. 현재 들어온 사람이 순서가 맞으면 바로 통과
        if (num == count) {
            count++;
        } else {
            // 2. 순서가 아니면 옆길(스택)로 보냄
            s.push(num);
        }

        // 3. 중요한 부분: 옆길의 맨 앞 사람이 순서가 되었는지 "항상" 확인
        while (!s.empty() && s.top() == count) {
            s.pop();
            count++;
        }
    }

    // 결과 확인: 모든 사람이 순서대로 나갔다면 count는 N+1이 됨
    if (count == N + 1) {
        cout << "Nice";
    } else {
        cout << "Sad";
    }

    return 0;
}