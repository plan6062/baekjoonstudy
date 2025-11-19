#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N, num;
    cin >> N;
    int count[10001] = {};
    for(int i = 0; i<N; i++){
        cin >> num;
        count[num]++;
    }
    // 1부터 10000까지 순회하면서 개수만큼 출력
    for(int i = 1; i <= 10000; i++){
        for(int j = 0; j < count[i]; j++){
            cout << i << "\n";
        }
    }
    return 0;
}