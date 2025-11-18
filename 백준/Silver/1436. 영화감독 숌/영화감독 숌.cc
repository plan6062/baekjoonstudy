#include <iostream>

using namespace std;

int main(){
    int N, count = 0, num = 0, digit;
    cin >> N;
    while(N != count){
        int num_copy = num;
        int cnt = 0;
        while(num_copy > 0){
            digit = num_copy % 10;
            num_copy = num_copy / 10;
            if(digit == 6){
                cnt ++;
            }else{
                cnt = 0;
            }
            if(cnt == 3){
                count++;
                break;
            }
        }
        num++;
    }
    cout << num-1;
    return 0;
}