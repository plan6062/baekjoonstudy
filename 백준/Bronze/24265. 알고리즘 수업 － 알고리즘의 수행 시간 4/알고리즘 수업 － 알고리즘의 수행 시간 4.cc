#include <iostream>

using namespace std;

int main(){
    long long n, count = 0;
    cin >> n;
    for(int i = 1; i<n; i++){
        for(int j = (i+1); j<n+1; j++){
            count++;
        }
    }
    cout << count <<endl << 2;
    return 0;
}