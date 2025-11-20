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
    sort(p.begin(), p.end());
    for (int i = 0; i < N; i++)
    {
        cout << p[i].first << " " << p[i].second << '\n';
    }
    return 0;
}