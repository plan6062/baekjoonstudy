#include <iostream>

using namespace std;

int gcd(int x, int y){
    if(y == 0){
        return x;
    }else{
        return gcd(y, x%y);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    for(int i = 0; i< T; i++){
        int A, B;
        cin >> A >> B;
        int result = A*B/gcd(A, B);
        cout << result << "\n";
    }
    return 0;
}