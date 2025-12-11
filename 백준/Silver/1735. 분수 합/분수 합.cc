#include <iostream>
#include <numeric>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num1, num2, den1, den2;
    cin >> num1 >> den1 >> num2 >> den2;
    // 분자: A*D + C*B
    int res_num = num1 * den2 + num2 * den1;
    // 분모: B*D
    int res_den = den1 * den2;

    // 약분
    int common_factor = gcd(res_num, res_den);
    cout << res_num / common_factor << " " << res_den / common_factor;
    return 0;
}