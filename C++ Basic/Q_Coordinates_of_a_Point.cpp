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
    /**
     * ++ Q1
     * -+ Q2
     * -- Q3
     * +- Q4
     */
    double x, y; cin >> x >> y;
    
    if(x == 0 && y == 0) { cout << "Origem" << endl; return; }
    if(x != 0 && y == 0) { cout << "Eixo X" << endl; return; }
    if(y != 0 && x == 0) { cout << "Eixo Y" << endl; return; }
    if(x > 0 && y > 0) { cout << "Q1" << endl;}
    else if(x < 0 && y > 0) {cout << "Q2" << endl;}
    else if(x < 0 && y < 0) {cout << "Q3" << endl;}
    else cout << "Q4" << endl;
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