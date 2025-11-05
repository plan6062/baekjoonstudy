#include <iostream>

using namespace std;

int main()
{
    int max, a, b;
    int arr[9][9] = {};
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> arr[i][j];
        }
    }

    max = arr[0][0];
    a = 1;
    b = 1;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                a = i+1;
                b = j+1;
            }
        }
    }

    cout << max << "\n"
         << a << " " << b;
    return 0;
}