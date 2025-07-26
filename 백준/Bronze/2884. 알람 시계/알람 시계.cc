#include <iostream>

using namespace std;

int main(){
    int H, M;
    cin >> H >> M;
    if(M < 45){
        H = H - 1;
        M = M + 15;
    }else if(M >= 45){
        M = M - 45;
    }
    if(H < 0){
        H = H+24;
    }
    cout << H << " " << M;

    return 0;
}