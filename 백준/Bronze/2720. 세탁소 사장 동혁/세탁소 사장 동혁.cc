#include <iostream>

using namespace std;

int main()
{
    int T, C;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> C;
        int quarter = 0, dime = 0, nickel = 0, penny = 0;
        while (C > 0)
        {
            if (C >= 25)
            {
                quarter += (C / 25);
                C = C % 25;
            }
            else if (C >= 10)
            {
                dime += (C / 10);
                C = C % 10;
            }
            else if (C >= 5)
            {
                nickel += (C / 5);
                C = C % 5;
            }
            else if (C >= 1)
            {
                penny += (C / 1);
                C = C % 1;
            }
        }
        cout << quarter << " " << dime << " " << nickel << " " << penny << endl;
    }
    return 0;
}