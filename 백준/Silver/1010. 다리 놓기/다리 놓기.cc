#include <iostream>

using namespace std;

long long factorial(long long num)
{
    long long result = 1;
    for (int i = 1; i <= num; i++)
    {
        result = result * i;
    }
    return result;
}

long long combination(long long num1, long long num2) {
    if (num2 == 0 || num1 == num2) return 1;
    
    // nCr이나 nC(n-r)이나 같으므로 계산 횟수를 줄임
    if (num2 > num1 / 2) num2 = num1 - num2;

    long long result = 1;
    for (int i = 1; i <= num2; i++) {
        result = result * num1; // 하나 곱하고
        result = result / i;    // 바로 하나 나눔 (이렇게 해야 오버플로우가 안 남)
        num1--;
    }
    return result;
}

int main(){
    int T;
    long long N, M, result;
    cin >> T;
    for(int i = 0; i< T; i++){
        cin >> N >> M;
        result = combination(M, N);
        cout << result << "\n";
    }
    return 0;
}