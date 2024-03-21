#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cin >> n;
    // int cnt = 0;
    // int tmp = n;
    // while (tmp != 0)
    // {
    //     int digit = tmp % 10;
    //     cnt++;
    //     tmp = tmp / 10;
    // }
    // cout << cnt;
    // // int zero = 4 - cnt;
    // // for (int i = 0; i < zero; i++)
    // //     cout << '0';
    // // cout << n;
    string s;
    cin >> s;
    int i = 0;
    // while (s[i] != '\0')
    // {
    //     i++;
    // }
    // cout << i;
    int x = s.size();
    // cout << x;
    int zero = 4 - x;
    for (int i = 0; i < zero; i++)
        cout << '0';
    cout << s;
}