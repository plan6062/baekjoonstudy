#include <iostream>
#include <algorithm>
#include <set>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 0;
    cin >> n;
    set<string, greater<string>> company;
    for(int i = 0; i<n; i++){
        string name, action;
        cin >> name >> action;
        if(action == "enter"){
            company.insert(name);
        }else{
            company.erase(name);
        }
    }
    for(const auto& name : company){
        cout << name << "\n";
    }
    return 0;
}