#include <iostream>

using namespace std;

bool isPrime(long long n) {
    if (n <= 1) return false;
    for (long long i = 2; i * i <= n; i++) { // i <= sqrt(n)
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        long long temp, answer;
        cin >> temp;
        while(isPrime(temp) == false){
            temp++;
        }
        answer = temp;
        cout << answer << "\n";
    }
    return 0;
}