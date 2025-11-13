#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int x = 1, y = 1, z = 1;
    while(x != 0 && y != 0 && z != 0){
        cin >> x >> y >> z;
        if(x == 0 && y == 0 && z == 0){
            return 0;
        }
        if(max({x,y,z}) >= x+y || max({x,y,z}) >= x+z || max({x,y,z}) >= y+z){
            cout << "Invalid" << endl;
        }else if(x == y &&  y == z){
            cout << "Equilateral" << endl;
        }else if(x == y || x == z || y == z){
            cout << "Isosceles" << endl;
        }else{
            cout << "Scalene" << endl;
        }
    }
    return 0;
}