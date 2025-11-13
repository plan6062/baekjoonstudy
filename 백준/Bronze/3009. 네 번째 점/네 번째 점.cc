#include <iostream>

using namespace std;

int main(){
    int x, y, x2, y2, x3, y3;
    cin >> x >> y >> x2 >> y2 >> x3 >> y3;
    int Xresult, Yresult;
    Xresult = x^x2^x3;
    Yresult = y^y2^y3;
    cout << Xresult << " " << Yresult;

    return 0;
}