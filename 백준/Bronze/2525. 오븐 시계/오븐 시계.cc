#include <iostream>

using namespace std;

int main(){
    int A, B, C, t;
    cin >> A >> B >> C;

    if(C > 59){
        t = C / 60;
        C = C % 60;
        A = A + t;
        B = B + C;
    }else if(C<60){
        B = B + C;
    }

    if (B > 59){
        B = B - 60;
        A = A + 1;
    }

    if (A > 23){
        A = A - 24;
    }

    cout << A << " " << B;
    
}