#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N, M;
    char color;
    char arr[50][50] = {};
    int min_val = 64;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> color;
            arr[i][j] = color;
        }
    }

    for (int i = 0; i < N - 7; i++)
    {
        for (int j = 0; j < M - 7; j++)
        {
            int cnt = 0;
            for (int x = 0; x < 8; x++)
            {
                for (int y = 0; y < 8; y++)
                {
                    if ((x + y) % 2 == 0)
                    {
                        if (arr[i + x][j + y] == 'W')
                        {
                            cnt++;
                        }
                    }
                    else
                    {
                        if (arr[i + x][j + y] == 'B')
                        {
                            cnt++;
                        }
                    }
                }
            }
            // W시작 기준 개수(cnt)와 B시작 기준 개수(64-cnt) 중 작은 것 선택
            int current_min = min(cnt, 64 - cnt);
            // 전체 최솟값 갱신
            if (current_min < min_val)
            {
                min_val = current_min;
            }
        }
    }
    cout << min_val;
    return 0;
}