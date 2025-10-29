#include <iostream>
#include <string> // getline을 사용하기 위해

using namespace std;

int main() {
    string line; 

    // getline(cin, line)은 
    // 1. cin(키보드 입력)으로부터 한 줄을 읽어서 line에 저장하고,
    // 2. 성공적으로 읽었으면 true를 반환
    while (getline(cin, line)) {
        
        // 읽어들인 line을 그대로 출력
        cout << line << "\n";
    }

    return 0;
}