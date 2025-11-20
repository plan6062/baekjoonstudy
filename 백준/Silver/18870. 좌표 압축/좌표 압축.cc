#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    vector<int> v;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    vector<int> cv = v;
    sort(cv.begin(), cv.end());
    cv.erase(unique(cv.begin(), cv.end()), cv.end());

    for (int i = 0; i < N; i++)
    {
        // lower_bound: 정렬된 범위에서 v[i] 이상인 첫 번째 위치를 찾음 (이진 탐색)
        // iterator끼리 빼면 인덱스(0부터 시작하는 순서)가 나옵니다.
        int rank = lower_bound(cv.begin(), cv.end(), v[i]) - cv.begin();
        cout << rank << " ";
    }
    return 0;
}