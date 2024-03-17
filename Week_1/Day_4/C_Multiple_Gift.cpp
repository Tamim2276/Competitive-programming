#include <iostream>

using namespace std;

int main()
{
    long long X, Y;
    cin >> X >> Y;

    long long maxLength = 1;

    for (long long i = X; i <= Y; i++)
    {
        long long length = 1;
        long long current = i;
        while (current <= Y / 2)
        {
            current *= 2;
            length++;
        }
        maxLength = max(maxLength, length);
    }

    cout << maxLength << endl;

    return 0;
}
