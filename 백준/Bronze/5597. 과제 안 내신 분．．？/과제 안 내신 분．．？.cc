#include <iostream>

using namespace std;

int main(){
    int n;
    int arr[100] = {};
    for(int i = 0; i < 28; i++){
        cin >> n;
        arr[n-1] = 1;
    }
    // 없는 번호 찾기
    for(int i = 0; i < 30; i++){
        if(arr[i] == 0){
            cout << i+1 << "\n";
        }
    }
    return 0;
}