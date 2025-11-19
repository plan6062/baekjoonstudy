#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N, k;
    cin >> N >> k;
    int arr[1000] = {};
    for(int i = 0; i<N; i++){
        cin >> arr[i];
    }
    sort(arr, arr+1000);
    reverse(arr, arr+1000);
    cout << arr[k-1];
    return 0;
}