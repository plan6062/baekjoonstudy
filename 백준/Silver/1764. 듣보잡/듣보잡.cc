#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M, count = 0;
    cin >> N >> M;
    vector<string> names(N);
    vector<string> found_name;
    for (int i = 0; i < N; i++)
    {
        cin >> names[i];
    }
    sort(names.begin(), names.end());
    for (int i = 0; i < M; i++)
    {
        string find_name;
        cin >> find_name;
        if (binary_search(names.begin(), names.end(), find_name))
        {
            count++;
            found_name.push_back(find_name);
        }
    }
    sort(found_name.begin(), found_name.end());
    cout << count << "\n";
    for (int i = 0; i < found_name.size(); i++)
    {
        cout << found_name[i] << "\n";
    }
}