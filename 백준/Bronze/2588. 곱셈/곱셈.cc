#include <iostream>

using namespace std;

int main(){
    int A, B;
    cin >> A;
    cin >> B;
    cout << A*(B%10) << endl << A*((B%100)/10) << endl << A*(B/100) << endl << A*B;
    return 0;

}