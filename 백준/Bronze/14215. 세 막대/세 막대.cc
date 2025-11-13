#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c, num, num2, num3;
    cin >> a >> b >> c;
    num = max({a, b, c});
    if(num == a){
        num2 = b;
        num3 = c;
        if(num < b+c){
            cout << a+b+c;
            return 0;
        }
    }else if(num == b){
        num2 = a;
        num3 = c;
        if(num < a+c){
            cout << a+b+c;
            return 0;
        }
    }else{
        num2 = a;
        num3 = b;
        if(num < a+b){
            cout << a+b+c;
            return 0;
        }
    }
    while (num >= a+b || num >= a+c || num >= b+c)
    {
        num--;
    }
    cout << num+num2+num3;
    return 0;
}