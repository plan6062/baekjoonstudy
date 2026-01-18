#include <iostream>

using namespace std;

int main(){
    int N;
    int answer = 1;
    cin >> N;
    for(int i = 0; i<N; i++){
        answer = answer * 2;
    }
    cout << answer;
    return 0;
}