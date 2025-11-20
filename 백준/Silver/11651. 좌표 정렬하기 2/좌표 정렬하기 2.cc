#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    int N, x, y;
    cin >> N;
    vector<pair<int, int>> p;
    for (int i = 0; i < N; i++)
    {
        cin >> x >> y;
        p.push_back(make_pair(x, y));
    }
    sort(p.begin(), p.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         {
    if (a.second != b.second) {
        // y 좌표 (second)가 다르면, y를 기준으로 비교
        return a.second < b.second; 
    }
    // y 좌표가 같으면, x 좌표 (first)를 기준으로 비교
    return a.first < b.first; });
    for (int i = 0; i < N; i++)
    {
        cout << p[i].first << " " << p[i].second << '\n';
    }
    return 0;
}