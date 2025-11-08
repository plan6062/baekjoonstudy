#include <iostream>

using namespace std;

int main(){
    int B;
    string N;
    cin >> N >> B;

    long long result = 0;
    for(int i = 0; i<N.length(); i++){
        result *= B;
        if(N[i] >= '0' && N[i] <= '9'){
            result += N[i] - '0';
        }else{
            result += N[i] - 'A' + 10;
        }
    }
    //36진법 수 ZZZZZ
    
    cout << result;

    return 0;
}