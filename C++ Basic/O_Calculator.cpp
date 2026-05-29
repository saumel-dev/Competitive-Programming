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
    int x, y; char ch;
    cin >> x >> ch >> y;
    
    if(ch == '+')
    {
        cout << x + y << endl;
    }
    else if(ch == '-')
    {
        cout << x - y << endl;
    }
    else if(ch == '*')
    {
        cout << x * y << endl;
    }
    else 
    {
        cout << x / y << endl;
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