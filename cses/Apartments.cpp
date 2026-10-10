// Author: Lumeron
// Created at: 2026-04-28 14:57

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
using ll = long long;
using ull = unsigned long long;
#define el '\n'
#define pii pair<int, int>
const int MOD = 1e9 + 7;
#define all(x) (x).begin(), (x).end()
#define Sort(x) sort(all(x))
#define Reverse(x) reverse(all(x))

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;

    deque<ll> a(n), b(m);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    Sort(a);
    Sort(b);

    ll ans = 0, i = 0, j = 0;

    while (i < n && j < m){

        if (a[i] < b[j] - k){
            i++;
        } else if (a[i] > b[j] + k){
            j++;
        } else {
            ans++; i++; j++;
        }
    }

    
    cout << ans;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}