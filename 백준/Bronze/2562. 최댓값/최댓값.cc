#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int num, arr[9];

    for (int i = 0; i < 9; i++)
    {
        cin >> num;
        arr[i] = num;
    }

    // int min = *min_element(begin(arr), end(arr));
    int* max_ptr = max_element(begin(arr), end(arr));
    int max_index = max_ptr - arr;

    cout << *max_ptr << endl
         << max_index+1 << endl;
    return 0;
}