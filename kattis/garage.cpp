// Author: Lumeron
// Created at: 2026-06-01 21:25

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
#define Sort(x)           sort(all(x))
#define Reverse(x)        reverse(all(x))

void solve(){
    ll n,m; cin >> n >> m;
    vector<ll> rates(n+1), 
               weights(m+1);

    // pakai priority queue untuk push index slot
    priority_queue<int, vector<int>, greater<int>> slot;
    
    
    for (ll i = 1; i <= n; i++){
        cin >> rates[i];   
        slot.push(i);
    }


    for (ll i = 1; i <= m; i++){
        cin >> weights[i];   
    }

    ll ans = 0;
    queue<int> antre;

    vector<ll> parkir(m+1, -1);
    for (ll i = 1; i <= 2*m; i++){
        ll x; cin >> x;



        if (x > 0){ // mobil mau masuk
            
            if (!slot.empty()){ // cek apakah ada slot parkir yang tersedia?
                // kalau ada langsung bayar
                // bayarnya dengan mengalikan berat mobil tersebut dengan rate slot pertama yang dipakai
                ans += weights[x] * rates[slot.top()];
                parkir[x] = slot.top(); // mobil x parkir di slot mana? 
                // kurangi slot
                slot.pop();
            
            } else { // kalau tidak ada, masuk ke ruang tunggu
                
                antre.push(x);
            }
            
            
        } else { // mobil mau keluar
            // cek mobil dengan index x parkir di slot mana

            slot.push(parkir[-x]);
            parkir[-x] = -1;

            if (!antre.empty()){
                ll mau_parkir = antre.front();
                antre.pop();

                ll nexslot = slot.top();
                slot.pop();
                parkir[mau_parkir] = nexslot;
                ans+= weights[mau_parkir] * rates[nexslot];
                
            }

        }
    }

    cout << ans ;
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t  = 1;
    // cin >> t;
    while (t--){
         solve();
    }
    return 0;
}

// lower_bound / upper_bound notes:
// requirement: container must be sorted first.
// lower_bound(all(v), x) -> first position with value >= x
// upper_bound(all(v), x) -> first position with value > x
// int lb = lower_bound(all(v), x) - v.begin();
// int ub = upper_bound(all(v), x) - v.begin();
// count of x = ub - lb
// range [L, R]:
// auto it = lower_bound(all(v), L);
// valid if it != v.end() && *it <= R
// in priority_queue, 




// void solve(){
//     ll n,m; cin >> n >> m;
//     vector<ll> rates(n), weights(m);
//     priority_queue<int, vector<int>, greater<int>> available, occupied;
//     for (ll i = 0; i < n; i++){
//         cin >> rates[i];
//         available.push(rates[i]);
//     }
//     cout << " ok \n";
    
//     for (ll i = 0; i < m; i++){
//         cin >> weights[i];
//     }   
//     cout << " ok \n";

//     ll ans = 0LL;

//     // while (!available.empty()){
//     //     cout << available.top() << ' ';
//     //     available.pop();
//     // }

//     for (ll i = 0; i < 2*m; i++){
//         ll x; cin >> x;
        
//         if (x > 0){

//             cout << "debug : berat " << weights[x-1] << " ava top " << available.top() <<  el; 
//             ans += weights[x-1] * available.top();
//             occupied.push(available.top());
//             available.pop();
            
//             cout << "debug " << ans << el;
//         } else {
//             available.push(occupied.top());
//             occupied.pop();
//         }
//     }


//     cout << ans;
// }


    // while (!available.empty()){
    //     cout << available.top() << ' ';
    //     available.pop();
    // }