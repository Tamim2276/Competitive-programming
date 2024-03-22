#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    string s, x;
    cin >> s >> x;
    int i = 0, j = 0;
    int cnt = 0;
    while (i < s.size() && j < x.size())
    {
        if (s[i] != x[j])
        {
            cnt++;
        }
        i++;
        j++;
    }
    cout << cnt;
}