#include <iostream>

using namespace std;

int main(){
    int A;
    int count = 0;
    int arr[42] = {};
    for(int i = 0; i<10; i++){
        cin >> A;
        arr[A%42] = 1;
    }
    for(int i =0; i<42; i++){
        if(arr[i] ==0){
            count++;
        }
    }
    cout << 42 - count;

    
    return 0;
}