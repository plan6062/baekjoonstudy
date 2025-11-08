#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N;
    cin >> N;
    long long side = pow(2, N) + 1;
    cout << side*side;
    return 0;
}