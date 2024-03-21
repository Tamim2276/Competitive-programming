#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            ans = i;
            break;
        }
    }
    if (ans)
        cout << ans;
    else
        cout << -1;
    return 0;
}