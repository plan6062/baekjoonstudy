#include <iostream>

using namespace std;

int main()
{
    int N, M, num;
    int arr[100][100] = {};
    int arr2[100][100] = {};
    int result[100][100] = {};
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> num;
            arr[i][j] = num;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> num;
            arr2[i][j] = num;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            result[i][j] = arr[i][j] + arr2[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}