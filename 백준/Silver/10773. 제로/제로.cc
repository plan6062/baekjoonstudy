#include <iostream>
#include <stack>

using namespace std;

stack<int> S;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int K, N, sum = 0;
    cin >> K;
    for(int i = 0; i < K; i++){
        cin >> N;
        if(N == 0){
            S.pop();
        }else{
            S.push(N);
        }
    }
    while(!S.empty()){
        sum += S.top();
        S.pop();
    }
    cout << sum;
    return 0;
}