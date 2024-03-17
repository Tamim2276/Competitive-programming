#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int n = floor((c + 0.5) / a);
    int ans = n * b;
    cout << ans;
}