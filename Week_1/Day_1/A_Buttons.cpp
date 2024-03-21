#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int mx = max(a, b);
    int ans;
    if (a == b)
        ans = a + b;
    else
        ans = mx + (mx - 1);
    cout << ans;
    return 0;
}