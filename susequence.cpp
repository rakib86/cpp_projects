#include <iostream>
using namespace std;

int main()
{
    int n, m, v1, v2;

    cin >> n;
    cin >> m;
    int A[n];
    int B[m];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == B[j])
        {
            j++;
        }
    }
    if (j == m)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}