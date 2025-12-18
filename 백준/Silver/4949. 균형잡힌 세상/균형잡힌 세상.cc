#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while (true)
    {
        string S;
        // [수정 1] 공백이 포함된 문장을 읽기 위해 getline 사용
        getline(cin, S);

        // 종료 조건: 온점 하나만 들어온 경우
        if (S == ".")
        {
            break;
        }

        stack<char> st; // [수정 2] 스택은 하나만 사용!
        bool isValid = true;

        for (int i = 0; i < S.length(); i++)
        {
            char c = S[i];

            // 여는 괄호는 무조건 스택에 넣음
            if (c == '(' || c == '[')
            {
                st.push(c);
            }
            // 닫는 소괄호 )
            else if (c == ')')
            {
                // 스택이 비어있지 않고, 맨 위가 짝꿍 '(' 여야 함
                if (!st.empty() && st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    isValid = false;
                    break;
                }
            }
            // 닫는 대괄호 ]
            else if (c == ']')
            {
                // 스택이 비어있지 않고, 맨 위가 짝꿍 '[' 여야 함
                if (!st.empty() && st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    isValid = false;
                    break;
                }
            }
        }

        if (st.empty() && isValid)
        {
            cout << "yes" << "\n"; // 4949번은 소문자 yes 출력
        }
        else
        {
            cout << "no" << "\n"; // 4949번은 소문자 no 출력
        }
    }
    return 0;
}