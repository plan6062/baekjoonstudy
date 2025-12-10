#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    vector<int> cards(N);
    for (int i = 0; i < N; i++)
    {
        cin >> cards[i];
    }
    sort(cards.begin(), cards.end());
    int M;
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        int find_num;
        cin >> find_num;
        cout << upper_bound(cards.begin(), cards.end(), find_num) - lower_bound(cards.begin(), cards.end(), find_num) << " ";
    }
    return 0;
}