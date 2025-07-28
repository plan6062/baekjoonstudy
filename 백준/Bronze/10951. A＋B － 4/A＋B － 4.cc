#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int A, B;
    
    while (cin >> A >> B) {  // 입력이 성공하는 동안만 반복
        cout << A + B << "\n";
    }
    return 0;
}