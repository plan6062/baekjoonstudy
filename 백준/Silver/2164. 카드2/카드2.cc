#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    queue<int> q;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        q.push(i + 1);
    }
    for (int i = 0; i < N; i++)
    {
        if(q.size() == 1)
        {
            cout << q.front();
            break;
        }
        q.pop();
        if (q.size() != 1)
        {
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
    }
    return 0;
}