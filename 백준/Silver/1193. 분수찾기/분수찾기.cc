#include <iostream>

using namespace std;

int main()
{
    int X, line = 1;
    int up, down;
    cin >> X;
    while (X > line)
    {
        X = X - line;
        line++;
    }
    if (line % 2 == 0)
    {
        up = X;
        down = line - X+1;
    }
    else
    {
        up = line - X+1;
        down = X;
    }
    cout << up << "/" << down;
    return 0;
}