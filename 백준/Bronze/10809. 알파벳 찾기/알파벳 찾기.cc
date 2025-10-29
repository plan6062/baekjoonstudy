#include <iostream>

using namespace std;

int main()
{
    string S;
    int arr[26];
    int index;

    cin >> S;
    for (int i = 0; i < 26; i++)
    {
        arr[i] = -1;
    }
    for (int i = 0; i < S.length(); i++)
    {
        index = S[i] - 'a';
        if (arr[index] == -1)
        {
            arr[index] = i;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}