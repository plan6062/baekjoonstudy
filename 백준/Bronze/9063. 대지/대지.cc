#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    if(N == 1){
        cout << 0;
        return 0;
    }
    int x, y;
    int Xarr[100000] = {};
    int Yarr[100000] = {};
    int Xlength = sizeof(Xarr) / sizeof(int);
    int Ylength = sizeof(Yarr) / sizeof(int);
    for(int i = 0; i<N; i++){
        cin >> x >> y;
        Xarr[i] = x;
        Yarr[i] = y;
    }
    long long length, height;
    length = *max_element(Xarr, Xarr+N) - *min_element(Xarr, Xarr+N);
    height = *max_element(Yarr, Yarr+N) - *min_element(Yarr, Yarr+N);
    cout << length*height;
    return 0;
}