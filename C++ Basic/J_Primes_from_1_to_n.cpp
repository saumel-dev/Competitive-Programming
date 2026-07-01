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

bool is_prime(int n)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
        }
    }
    if (cnt == 2)
        return true;
    else
        return false;
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (is_prime(i))
        {
            cout << i << " ";
        }
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