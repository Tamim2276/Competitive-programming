#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<char> st;
    int ans = 0;
    for (char c : s)
    {
        if (!st.empty() && c != st.top())
        {
            st.pop();
            ans++;
        }
        else
        {
            st.push(c);
        }
    }
    if (ans % 2 == 0)
        cout << "Ramos" << endl;
    else
        cout << "Zlatan" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}