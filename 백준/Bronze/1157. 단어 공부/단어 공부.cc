#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string alphabet;
    int arr[26] = {}; // a~z
    int max, count = 0;
    cin >> alphabet;
    for(int i = 0; i < alphabet.length(); i++){
        char ch = toupper(alphabet[i]);// string에서 읽어온 알파벳  arr에 넣기
        int index = ch - 'A';
        arr[index]++;
    }
    max = *max_element(arr, arr+26);
    for(int i = 0; i<26; i++){
        if(arr[i] == max){
            count++;
        }
    }
    if(count >=2){
        cout << "?";
    }else{
        char result;
        for(int i = 0; i < 26; i++){
            if(arr[i] == max){
                result = (char)('A'+i);
                cout << result;
                break;
            }
        }
    }
    return 0;
}