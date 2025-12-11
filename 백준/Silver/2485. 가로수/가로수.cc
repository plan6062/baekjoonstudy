#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    vector<int> tree(N);
    for(int i = 0; i<N; i++){
        cin >> tree[i];
    }
    int gcd_dist = tree[1] - tree[0];

    for(int i = 2; i < N; i++){
        int distance = tree[i] - tree[i-1];
        gcd_dist = gcd(gcd_dist, distance); 
    }
    int answer =((tree[N-1] - tree[0]) / gcd_dist) +1 - (N);
    cout << answer;
    return 0;
}