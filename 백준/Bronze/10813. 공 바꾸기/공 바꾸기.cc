#include <iostream>

using namespace std;

int main(){
    int N, M, i, j, temp;
    int arr[100];

    for(int k = 0; k <100; k++){
        arr[k] = k+1;
    }

    cin >> N >> M;

    for(int k = 0; k < M; k++){
        cin >> i >> j;
        // 바구니 변경 로직
        temp = arr[j-1];
        arr[j-1] = arr[i-1];
        arr[i-1] = temp;
    }

    for(int k = 0; k < N; k++){
        cout << arr[k] << " ";
    }
    
    return 0;
}