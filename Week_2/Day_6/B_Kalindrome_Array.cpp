#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool checkPalindrome(vector<int> v, int x)
{
    int n = v.size(), i = 0, j = n - 1;

    while (i < j)
    {
        if (v[i] == x)
            i++;
        else if (v[j] == x)
            j--;
        else if (v[i] != v[j])
            return 0;
        else
            i++, j--;
    }

    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; ++i)
            cin >> v[i];

        bool flag = 1;

        for (int i = 0; i < n - 1 - i; ++i)
            if (v[i] != v[n - 1 - i])
            {
                flag = checkPalindrome(v, v[i]) or checkPalindrome(v, v[n - 1 - i]);
                break;
            }

        if (flag)
            cout << "YES\n";

        else
            cout << "NO\n";
    }
    return 0;
}