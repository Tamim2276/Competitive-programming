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

        map<string, int> freq;

        vector<string> a[3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string input;
                cin >> input;
                a[i].push_back(input);
                freq[input]++;
            }
        }

        int p[3] = {0};
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (freq[a[i][j]] == 1)
                {
                    p[i] += 3;
                }
                else if (freq[a[i][j]] == 2)
                {
                    p[i] += 1;
                }
            }
        }

        cout << p[0] << " " << p[1] << " " << p[2] << endl;
    }
    return 0;
}
