#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N;
    double M, num, avg;
    double sum = 0.0;
    double arr[1000] = {};
    cin >> N;
    for(int i =0; i<N; i++){
        cin >> num;
        arr[i] = num;
    }
    M = *max_element(arr, arr+N);
    for(int i = 0; i < N; i++){
        arr[i] = arr[i]/M*100;
    }
    for(int i =0; i<N; i++){
        sum += arr[i];
    }
    avg = sum/N;
    cout << avg;
    return 0;
}