#include <iostream>

using namespace std;

int main(){
    int N, max_num = 1, layer = 1;
    cin >> N;
    while(N>max_num){
        max_num = max_num + layer*6;
        layer++;
    }
    cout << layer;
    return 0;

}