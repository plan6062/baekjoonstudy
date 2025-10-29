#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;
    int total_time = 0; // 총 시간을 저장할 변수

    // 문자열의 모든 글자를 하나씩 확인
    for (int i = 0; i < S.length(); i++) {
        char c = S[i]; // 현재 확인 중인 문자

        if (c >= 'A' && c <= 'C') { // 2번 다이얼 (3초)
            total_time += 3;
        } else if (c >= 'D' && c <= 'F') { // 3번 다이얼 (4초)
            total_time += 4;
        } else if (c >= 'G' && c <= 'I') { // 4번 다이얼 (5초)
            total_time += 5;
        } else if (c >= 'J' && c <= 'L') { // 5번 다이얼 (6초)
            total_time += 6;
        } else if (c >= 'M' && c <= 'O') { // 6번 다이얼 (7초)
            total_time += 7;
        } else if (c >= 'P' && c <= 'S') { // 7번 다이얼 (8초)
            total_time += 8;
        } else if (c >= 'T' && c <= 'V') { // 8번 다이얼 (9초)
            total_time += 9;
        } else if (c >= 'W' && c <= 'Z') { // 9번 다이얼 (10초)
            total_time += 10;
        }
    }

    cout << total_time;
    return 0;
}