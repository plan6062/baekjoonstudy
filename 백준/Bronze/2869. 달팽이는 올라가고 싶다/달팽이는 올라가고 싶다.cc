#include <iostream>

using namespace std;

int main()
{
    int A, B, V, H, N, day;
    cin >> A >> B >> V;
    H = V - A;
    day = A - B;
    N = H/day;
    if(H%day != 0){
        N++;
    }
    cout << N+1;
    return 0;
}