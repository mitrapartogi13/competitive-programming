// Author: Lumeron
// Created at: 2026-06-04 16:20

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

bool cmp(pair<string, int> a, 
         pair<string, int> b){

    if (a.second != b.second){
        return a.second > b.second;
    }

    return a.first < b.first;
}
signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    vector <pair<string, int>> student;

    student.pb({"Nathan", 90});
    student.pb({"Alice", 80});
    student.pb({"BoB", 80});

    // Sort(student, cmp);
    sort(student.begin(), student.end(), cmp);
    for (auto i : student){
        cout << i.first << ' ' << i.second << el;
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