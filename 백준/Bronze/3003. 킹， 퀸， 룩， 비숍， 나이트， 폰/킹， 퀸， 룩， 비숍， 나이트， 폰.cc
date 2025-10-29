#include <iostream>
using namespace std;

int main(){
    int King, Queen, Rook, Vishop, knight, Pone;
    cin >> King >> Queen >> Rook >> Vishop >> knight >> Pone;
    cout << 1 - King << " " << 1 - Queen << " " << 2-Rook << " " << 2-Vishop << " " << 2-knight << " " << 8-Pone;

    return 0;
}