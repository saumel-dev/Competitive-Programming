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
    int n; cin >> n;
    int space = n - 1;
    for(int i = 1; i <= n; i++)
    {
        for(int i = 1; i <= space; i++)
        {
            cout << " ";
        }
        for(int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        space--;
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