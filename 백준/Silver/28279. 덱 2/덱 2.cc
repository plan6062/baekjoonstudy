#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    deque<int> dq;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int n, X;
        cin >> n;
        switch (n)
        {
        case 1:
            cin >> X;
            dq.push_front(X);
            break;
        case 2:
            cin >> X;
            dq.push_back(X);
            break;
        case 3:
            if(!dq.empty()){
                cout << dq.front() << "\n";
                dq.pop_front();
            }else{
                cout << -1 << "\n";
            }
            break;
        case 4:
            if(!dq.empty()){
                cout << dq.back() << "\n";
                dq.pop_back();
            }else{
                cout << -1 << "\n";
            }
            break;
        case 5:
            cout << dq.size() << "\n";
            break;
        case 6:
            if(dq.empty()){
                cout << 1 << "\n";
            }else{
                cout << 0 << "\n";
            }
            break;
        case 7:
            if(!dq.empty()){
                cout << dq.front() << "\n";
            }else{
                cout << -1 << "\n";
            }
            break;
        case 8:
            if(!dq.empty()){
                cout << dq.back() << "\n";
            }else{
                cout << -1 << "\n";
            }
            break;
        }
    }

    return 0;
}