#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int A, B;
    cin >> A >> B;
    vector<int> Anum(A);
    vector<int> Bnum(B);
    for(int i = 0; i < A; i++){
        cin >> Anum[i];
    }
    for(int i = 0; i < B; i++){
        cin >> Bnum[i];
    }
    sort(Anum.begin(), Anum.end());
    sort(Bnum.begin(), Bnum.end());

    int intersection_count = 0;
    
    for(int num : Anum) {
        if(binary_search(Bnum.begin(), Bnum.end(), num)) {
            intersection_count++;
        }
    }

    // 대칭 차집합의 개수 공식: (A의 크기 + B의 크기) - 2 * (교집합 크기)
    int result = A + B - 2 * intersection_count;

    cout << result << "\n";
    return 0;
}