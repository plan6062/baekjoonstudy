#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a == b && a == c && b == c && a == 60){
        cout << "Equilateral";
        return 0;
    }else if(a + b + c != 180){
        cout << "Error";
        return 0;
    }else if(a+b+c == 180 && (a == b || a == c || b == c)){
        cout << "Isosceles";
        return 0;
    }else{
        cout << "Scalene";
    }
    return 0;
}