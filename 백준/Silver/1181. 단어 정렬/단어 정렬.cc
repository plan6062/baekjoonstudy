#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool comp(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return s1.length() < s2.length();
    }
    return s1 < s2;
}
int main()
{
    int N;
    vector<string> words = {};
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string tmp;
        cin >> tmp;
        words.push_back(tmp);
    }
    sort(words.begin(), words.end(), comp);
    words.erase(unique(words.begin(), words.end()), words.end());
    for (int i = 0; i < words.size(); i++)
    {
        cout << words[i] << "\n";
    }
    return 0;
}