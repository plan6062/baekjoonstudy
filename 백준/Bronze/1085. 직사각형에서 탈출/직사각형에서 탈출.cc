#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int x,y,w,h;
    cin >> x >> y >> w >> h;
    int a,b;
    a = w-x;
    b = h-y;
    int result = min({x, y, a, b});
    cout << result;
    return 0;
}