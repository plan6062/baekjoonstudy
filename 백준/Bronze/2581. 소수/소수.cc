#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num)
{
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int M, N, sum = 0, min = 0;
    cin >> M >> N;
    for (int i = M; i < N + 1; i++)
    {
        if (isPrime(i))
        {
            sum += i;
            if (min == 0)
            {
                min = i;
            }
        }
    }
    if (sum == 0)
    {
        sum = -1;
        cout << sum;
        return 0;
    }
    cout << sum << "\n"
         << min;
    return 0;
}