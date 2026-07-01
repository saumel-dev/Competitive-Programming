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
#define mem(a,b) memset(a, b, sizeof(a))
#define check cout << "-__________________-" << endl


void solve()
{
    int n; cin >> n;
    int num[n];
    for(int i = 0; i < n; i++) cin >> num[i];
    int even = 0, odd = 0, pos = 0, neg = 0;
    for(int i = 0; i < n; i++)
    {
        if(num[i] % 2 == 0) even++;
        if(num[i] % 2 != 0) odd++;
        if(num[i] < 0) neg++;
        if(num[i] > 0) pos++;
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
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