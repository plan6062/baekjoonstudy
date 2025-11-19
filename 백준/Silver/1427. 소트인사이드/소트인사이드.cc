#include <iostream>
#include <algorithm>
#include <string> // string 사용을 위해 헤더 추가

using namespace std;

int main(){
    string N; // 숫자를 문자열로 입력받음
    cin >> N;

    // 문자열 자체를 정렬
    // 내림차순 정렬 (9876...)
    sort(N.begin(), N.end(), greater<char>());
    
    // 만약 오름차순(1234...)을 원하면
    // sort(N.begin(), N.end());

    cout << N;

    return 0;
}