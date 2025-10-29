#include <iostream>
#include <string>

using namespace std;

int main(){
    int N;
    int sum =0;
    cin >> N;
    string S;
    cin >> S;
    for(int i = 0; i<N; i++){
        sum += S[i] -'0'; // 아스키코드 활용
    }
    cout << sum;
    return 0;
}