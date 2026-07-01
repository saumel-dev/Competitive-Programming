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
    string s;
    cin >> s;
    string s2 = s;
    reverse(s2.begin(), s2.end());
    if (s == s2)
    {
        cout << s << endl;
        cout << "YES" << endl;
    }
    else
    {
        int z = 0;
        for(int i = 0; i < s2.size(); i++)
        {
            if(z == i && s2[i] == '0')
            {
                z++;
                continue;
            }
            else
            {
                cout << s2[i];
            }
        }
        nl;
        cout << "NO" << endl;
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