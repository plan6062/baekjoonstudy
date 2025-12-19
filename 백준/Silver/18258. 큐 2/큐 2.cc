#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    // 입출력 속도 향상
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    queue<int> q;

    while (N--) {
        string S;
        cin >> S;

        if (S == "push") {
            int X;
            cin >> X;
            q.push(X);
        } 
        else if (S == "pop") {
            if (!q.empty()) {
                // 맨 앞의 원소를 출력하고 제거
                cout << q.front() << "\n";
                q.pop();
            } else {
                cout << "-1\n";
            }
        } 
        else if (S == "size") {
            cout << q.size() << "\n";
        } 
        else if (S == "empty") {
            if(q.empty()){
                cout << 1 << "\n";
            }else{
                cout << 0 << "\n";
            }
        } 
        else if (S == "front") {
            if (q.empty()) {
                cout << "-1\n";
            } else {
                cout << q.front() << "\n";
            }
        } 
        else if (S == "back") {
            if (q.empty()) {
                cout << "-1\n";
            } else {
                cout << q.back() << "\n";
            }
        }
    }

    return 0;
}