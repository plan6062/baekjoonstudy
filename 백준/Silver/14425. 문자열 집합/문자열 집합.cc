#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M, count = 0;
    string find_word;
    cin >> N >> M;
    vector<string> words(N);
    for(int i = 0; i<N; i++){
        cin >> words[i];
    }
    sort(words.begin(), words.end());
    for(int i = 0; i<M; i++){
        cin >> find_word;
        if(binary_search(words.begin(), words.end(), find_word)){
            count++;
        }
    }
    cout << count;
    return 0;
}