#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, count = 0;
    cin >> n;
    cin >> m;
    int A[n] = {0};
    for (int i = 0; i < n; i++)
        cin >> A[i];

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[j] == i)
            {

                count++;
            }
        }
        if (count != 0)
        {
            cout << count << endl;
        }

        count = 0;
    }
    return 0;
}