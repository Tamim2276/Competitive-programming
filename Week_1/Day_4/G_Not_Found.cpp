#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> v(26);
    for (int i = 0; i < s.size(); i++)
    {
        int val = s[i] - 'a';
        v[val]++;
    }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << char('a' + i) << v[i] << endl;
    // }
    bool found = false;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            cout << char(i + 'a');
            found = true;
            break;
        }
    }
    if (!found)
        cout << "None";
}