/*
n = 5

*********
 *******
  *****
   ***
    *

*/

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
        for(int space = 1; space < i; space++) cout << " ";
        for(int j = i; j <= n; j++) cout << "*";
        for(int k = n; k > i; k--) cout << "*";
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