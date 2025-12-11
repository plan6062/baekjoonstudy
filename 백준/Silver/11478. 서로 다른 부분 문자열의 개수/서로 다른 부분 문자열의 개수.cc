#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    set<string> S;
    string temp;
    cin >> temp;
    for(int i = 0; i<(int)temp.length(); i++){
        for(int j = i; j<(int)temp.length(); j++){
            S.insert(temp.substr(i,j-i+1));
        }
    }

    cout << S.size();

    return 0;
}