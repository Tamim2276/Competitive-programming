// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int

// void solve()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     int i = 0;
//     int cnt = 0;
//     while (i < s.size())
//     {
//         if (s[i] == '(')
//             cnt++;
//         // else if (cnt)
//         //     cnt--;
//         // or
//         if (s[i] == ')' && cnt > 0)
//             cnt--;
//         i++;
//     }
//     cout << cnt << endl;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//         solve();
// }

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        std::stack<char> st;
        for (int i = 0; i < n; i++)
        {
            if (st.empty())
            {
                st.push(s[i]);
            }
            else
            {
                if (s[i] == '(')
                {
                    st.push(s[i]);
                }
                else if (s[i] == ')')
                {
                    if (st.top() == '(')
                        st.pop();
                    else
                        st.push(s[i]);
                }
            }
        }
        cout << st.size() / 2 << endl;
    }
    return 0;
}