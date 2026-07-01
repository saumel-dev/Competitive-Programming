#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

typedef long long ll;
typedef double dl;

#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl cout << endl

void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = i; k <= n - 1; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        if (i > 1)
        {
            for (int a = 1; a <= i - 1; a++)
            {
                cout << "*";
            }
        }
        nl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }

        for (int a = i - 1; a >= 1; a--)
        {
            cout << "*";
        }

        nl;
    }
}
int main()
{
    optimize();

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}