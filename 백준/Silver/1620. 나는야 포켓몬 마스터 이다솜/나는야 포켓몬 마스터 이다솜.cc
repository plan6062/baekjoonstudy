#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    // 1. 이름 -> 번호 찾기용 (Map)
    map<string, int> name_to_id;
    
    // 2. 번호 -> 이름 찾기용 (Vector/배열)
    // N이 최대 10만이니 넉넉하게 잡거나 동적 할당
    vector<string> id_to_name(N + 1); 

    for(int i = 1; i <= N; i++){
        string name;
        cin >> name;
        
        name_to_id[name] = i; // Map에 저장
        id_to_name[i] = name; // Vector(배열)에 저장 (인덱스가 곧 번호)
    }

    for(int i = 0; i < M; i++){
        string input;
        cin >> input;

        if (isdigit(input[0])) {
            // 숫자가 입력되면 -> 배열 인덱스로 바로 접근 (O(1)) -> 엄청 빠름!
            int index = stoi(input);
            cout << id_to_name[index] << "\n";
        } 
        else {
            // 문자가 입력되면 -> Map으로 검색 (O(log N))
            cout << name_to_id[input] << "\n";
        }
    }
    return 0;
}