#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main() {
    // 입출력 속도 향상
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> type(N); // 0: queue, 1: stack
    for (int i = 0; i < N; i++) {
        cin >> type[i];
    }

    deque<int> dq;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        // 큐인 경우에만 의미가 있으므로 deque에 저장
        if (type[i] == 0) {
            dq.push_back(x);
        }
    }

    int M;
    cin >> M;
    for (int i = 0; i < M; i++) {
        int x;
        cin >> x;
        
        dq.push_front(x);
        cout << dq.back() << " ";
        dq.pop_back();
    }

    return 0;
}