#include <iostream>
#include <numeric>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int A, B;
    cin >> A >> B;
    cout << lcm(A, B);
    return 0;
}