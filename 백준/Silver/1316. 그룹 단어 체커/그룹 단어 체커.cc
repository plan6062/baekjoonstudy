#include <iostream>

using namespace std;

int main()
{
    int num, count = 0;
    int index;
    cin >> num;
    string word;
    for (int i = 0; i < num; i++)
    {
        bool alphabet[26] = {};
        bool isGroupWord = true;
        cin >> word;
        for (int j = 0; j < word.length() - 1; j++)
        {
            index = word[j] - 'a';
            alphabet[index] = true;
            if (word[j] != word[j + 1])
            {
                index = word[j + 1] - 'a';
                if (alphabet[index] == true)
                {
                    isGroupWord = false;
                    break;
                }
            }
        }
        if (isGroupWord == true)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}