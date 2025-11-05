#include <iostream>

using namespace std;

int main(){
    string croatia;
    int count = 0;
    cin >> croatia;
    for(int i = 0; i < croatia.length(); i++){
        if(croatia[i] == 'c'){
            if(croatia[i+1] == '=' || croatia[i+1] == '-'){
                count --;
            }
        }
        if(croatia[i] == 'd'){
            if(croatia[i+1] == '-'){
                count --;
            }else if(croatia[i+1] == 'z' && croatia[i+2] == '='){
                count -= 2;
            }
        }
        if(croatia[i] == 'l'){
            if(croatia[i+1] == 'j'){
                count --;
            }
        }
        if(croatia[i] == 'n'){
            if(croatia[i+1] == 'j'){
                count --;
            }
        }
        if(croatia[i] == 's'){
            if(croatia[i+1] == '='){
                count --;
            }
        }
        if(croatia[i-1] != 'd' && croatia[i] == 'z'){
            if(croatia[i+1] == '='){
                count --;
            }
        }
        count++;
    }
    cout << count;
    return 0;
}