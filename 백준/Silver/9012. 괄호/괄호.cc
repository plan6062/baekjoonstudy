#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) // T번 반복
    {
        string s;
        cin >> s;

        stack<char> st; // 매 테스트 케이스마다 새로운 스택 생성 (초기화 효과)
        bool isValid = true; // VPS 여부를 판단하는 플래그

        for (int i = 0; i < s.length(); i++) // 문자열의 길이만큼 문자 하나씩 검사
        {
            char c = s[i];

            if (c == '(') 
            {
                st.push(c); // 여는 괄호는 스택에 넣음
            }
            else // c == ')'
            {
                if (!st.empty()) 
                {
                    st.pop(); // 짝이 맞으므로 스택에서 뺌
                }
                else 
                {
                    // 스택이 비어있는데 닫는 괄호가 나오면 잘못된 괄호 문자열
                    isValid = false;
                    break; 
                }
            }
        }

        // 모든 과정을 거친 후 스택이 비어있고, 중간에 오류가 없었어야 YES
        if (st.empty() && isValid)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}