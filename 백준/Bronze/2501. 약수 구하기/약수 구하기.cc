#include <iostream>

using namespace std;

int main(){
    int N, K, count = 0;
//    int arr[10000] = {0};
    cin >> N >> K;
    for(int i = 1; i<=N; i++){
        if(N%i == 0){
            count++;
        }
        if(count == K){
            cout << i;
            return 0;
        }
    }
    cout << "0";
    return 0;
}