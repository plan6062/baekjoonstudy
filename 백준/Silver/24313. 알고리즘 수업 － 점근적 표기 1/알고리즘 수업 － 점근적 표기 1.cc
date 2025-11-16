#include <iostream>

using namespace std;

int main(){
    long long a1, a0, c, n0;
    cin >> a1 >> a0 >> c >> n0;
    bool condition1((a1*n0)+a0 <= c*n0);
    bool condition2(a1 <= c);
    if(condition1 && condition2){
        cout << 1;
    }else{
        cout << 0;
    }
    return 0;
}