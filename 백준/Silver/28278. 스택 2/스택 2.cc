#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, C;
    stack<int> stack;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> C;
        switch (C)
        {
        case 1:
            int X;
            cin >> X;
            stack.push(X);
            break;
        case 2:
            if (stack.empty())
            {
                cout << -1 << "\n";
                break;
            }
            cout << stack.top() << "\n";
            stack.pop();
            break;
        case 3:
            cout << stack.size() << "\n";
            break;
        case 4:
            if (stack.empty())
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 0 << "\n";
            }
            break;
        case 5:
            if (stack.empty())
            {
                cout << -1 << "\n";
                break;
            }
            cout << stack.top() << "\n";
            break;
        }
    }
    return 0;
}