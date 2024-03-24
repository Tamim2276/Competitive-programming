#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve1()
{
    int n;
    cin >> n;
    string req = "Timur";
    string s;
    cin >> s;
    sort(req.begin(), req.end());
    sort(s.begin(), s.end());
    if (s == req)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve1();
}