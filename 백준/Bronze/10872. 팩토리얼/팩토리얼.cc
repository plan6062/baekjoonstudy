#include <iostream>

using namespace std;

int factorial(int num){
    int result = 1;
    for(int i = 1; i<=num; i++){
        result = result *i;
    }
    return result;
}

int main(){
    int N, result;
    cin >> N;
    result = factorial(N);
    cout << result;
    return 0;
}