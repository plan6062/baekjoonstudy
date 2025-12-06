#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M, find_num;
    cin >> N;
    vector<int> num_card(N);
    for (int i = 0; i < N; i++)
    {
        cin >> num_card[i];
    }
    sort(num_card.begin(), num_card.end());
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> find_num;
        if(binary_search(num_card.begin(), num_card.end(), find_num)){
            cout << 1 << " ";
        }else{
            cout << 0 << " ";
        }
    }
    return 0;
}