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
#define numeck cout << "-__________________-" << endl

void solve()
{
    char ch;
    cin >> ch;
    int num = (int)ch;
    if (num >= 97 && num <= 122)
    {
        cout << "ALPHA" << endl
             << "IS SMALL" << endl;
    }
    else if (num >= 65 && num <= 90)
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL" << endl;
    }
    else if (num >= 48 && num <= 57)
        cout << "IS DIGIT" << endl;
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