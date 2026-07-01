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
#define mem(a, b) memset(a, b, sizeof(a))
#define check cout << "-__________________-" << endl

void solve()
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if (l2 >= l1 && l2 <= r1 || l1 >= l2 && l1 <= r2)
    {
        if (l2 >= l1)
        {
            cout << l2 << " ";
            if (r2 >= r1)
            {
                cout << r1 << endl;
            }
            else
            {
                cout << r2 << endl;
            }
        }
        else
        {
            cout << l1 << " ";
            if (r2 >= r1)
            {
                cout << r1 << endl;
            }
            else
            {
                cout << r2 << endl;
            }
        }
    }
    else
    {
        cout << -1 << endl;
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