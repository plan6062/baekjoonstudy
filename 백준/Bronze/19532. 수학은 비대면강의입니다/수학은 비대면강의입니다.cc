#include <iostream>

using namespace std;

int main(){
    int a, b, c, d, e, f, x ,y, result1, result2;
    cin >> a >> b >> c >> d >> e >> f;
    for(int i = -999; i<1000; i++){
        for(int j = -999; j<1000; j++){
            if(i*a + j*b == c && i*d + j*e == f){
                x = i;
                y = j;
            }
        }
    }
    cout << x << " " << y;
    return 0;
}