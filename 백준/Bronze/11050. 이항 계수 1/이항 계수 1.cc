#include <iostream>

using namespace std;

int factorial(int num)
{
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result = result * i;
    }
    return result;
}

int main()
{
    int N, K;
    int result;
    cin >> N >> K;
    result = N;

    for (int i = N - 1; i > N - K; i--)
    {
        result = result * i;
    }

    if (K == 0)
    {
        cout << 1;
        return 0;
    }
    else
    {
        cout << result / factorial(K);
        return 0;
    }
}