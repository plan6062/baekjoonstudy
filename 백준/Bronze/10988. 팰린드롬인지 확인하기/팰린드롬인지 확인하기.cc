#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    // 배열 두개를 만들고 하나는 입력받은값
    string arr, originArr;
    cin >> arr;
    originArr = arr;
    // 하나는 reverse
    reverse(arr.begin(), arr.end());
    // 두개를 비교하며 같으면 1출력 아니면 0출력
    if(arr.compare(originArr) == 0){
        cout << "1";
    }else{
        cout << "0";
    }
    return 0;
}