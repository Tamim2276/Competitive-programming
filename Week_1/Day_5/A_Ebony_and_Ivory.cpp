#include <bits/stdc++.h>
using namespace std;

int knapsack(int a, int b, int c, vector<int> &dp)
{
    if (c < 0)
        return 0;
    if (c == 0)
        return 1;
    if (dp[c] != -1)
        return dp[c];
    if (a <= c)
    {
        int op1 = knapsack(a, b, c - a, dp);
        int op2 = knapsack(a, b, c - b, dp);
        return dp[c] = op1 || op2;
    }
    else
    {

        int op2 = knapsack(a, b, c - b, dp);
        return dp[c] = op2;
    }
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> dp(c + 1, -1);
    int ans = knapsack(a, b, c, dp);
    if (ans)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}