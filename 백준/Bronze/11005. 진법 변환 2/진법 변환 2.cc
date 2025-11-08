#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N, B;
    cin >> N >> B;
    string result = "";

    if(N == 0){
        cout << "0";
        return 0;
    }

    while(N!=0){
        int remainder = N%B;
        if(remainder < 10){
            result += (remainder + '0');
        }else{
            result += (remainder - 10 + 'A');
        }
        N = N/B;
    }
    reverse(result.begin(), result.end());
    cout << result;
    return 0;
}