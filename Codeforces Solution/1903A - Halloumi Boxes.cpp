//                          #249965005	Mar/06/2024 21:26 	Ritul_Patel	1903A - Halloumi Boxes	C++20 (GCC 11-64)	Accepted	15 ms	0 KB
#include <bits/stdc++.h>
using namespace std;
//----------------------------&&&---------------------------------------------------------&&&----------------------------------\\
//----------------------------&&&---------------------------------------------------------&&&----------------------------------\\
 
#define ll long long
#define ld long double
#define Go ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(NULL)
 
// Loops
#define fi(l, r) for (ll i = l; i < r; i++)
#define fj(l, r) for (ll j = l; j < r; j++)
#define fk(l, r) for (ll k = l; k < r; k++)
#define fir(r, l) for (ll i = r; i >= l; i--)
#define fjr(r, l) for (ll j = r; j >= l; j--)
#define rfo(i,a,b)  for(ll i=a;i>=b;i--)
#define fq(q) while(q--)
 
// Inputs
#define in(n) ll n;cin>>n;
#define inn(n,k) ll n,k;cin>>n>>k;
#define strin(s) string s;cin>>s;
// Outputs
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl "\n"
 
// STL
#define pb push_back
#define ppb pop_back
#define F first
#define S second
 
// Sorting
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define rev(v) reverse(all(v));
#define maxa(v) *max_element(v.begin(),v.end())
#define mina(v) *min_element(v.begin(),v.end())
 
 
// Test Case
#define Test_case \
    int t = 1;    \
    cin >> t;     \
    while (t--)
 
//----------------------------&&&---------------------------------------------------------&&&----------------------------------\\
//----------------------------&&&---------------------------------------------------------&&&----------------------------------\\
 
void solve() {
    int k, n, c(0);
    cin >> n >> k;
    ll a[n];
    fi(0, n)
    {
        cin >> a[i];
    } 
    if(is_sorted(a,a+n) || k > 1)
    {
            yes;
    }
        else
        {
            no;
        }
}
 
int main() {
    Go;
    Test_case {
        solve();
    }
 
    return 0;
}
