// Author: Lumeron
// Created at: 2026-05-20 23:20

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

struct graph{
    long vertexCount, edgeCount;
    vector<vector<long>> adjList;
    
    void init(long v){
        vertexCount = v;
        edgeCount = 0;

        for(int i=0; i<vertexCount; i++){
            adjList.push_back({}); 
        }
    }

    void add_edge(long vertex1, long vertex2){
        adjList[vertex1].push_back(vertex2);
        adjList[vertex2].push_back(vertex1);
        edgeCount++;
    }

    void dfs(vector<long> &result, long start){
        vector<bool> visited(vertexCount, false);
        stack<long> st;

        st.push(start);
        visited[start] = true;
        result.push_back(start);

        while(!st.empty()){
            long temp = st.top();
            st.pop();

            if(!visited[temp]){
                result.push_back(temp);
                visited[temp] = true;
            }

            for(auto vertex:adjList[temp]){
                if (!visited[vertex])
                    st.push(vertex);
            }
        }
    }

    void bfs(vector<long> &result, long start){
        vector<bool> visited(vertexCount, false);
        queue<long> q;

        q.push(start);
        visited[start] = true;
        result.push_back(start);

        while(!q.empty()){
            long temp = q.front();
            q.pop();

            for(auto vertex:adjList[temp]){
                if (!visited[vertex]){
                    q.push(vertex);
                    visited[vertex] = true;
                    result.push_back(vertex);
                }
            }
        }
    }
};

void solve(){
    int n, m; cin >> n >> m;

    graph g;
    g.init(n + 1);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g.add_edge(u, v);
    }

    map<int, int> degree_count;
    for (int i = 1; i <= n; i++) {
        degree_count[g.adjList[i].size()]++;
    }

    int x = 0, y = 0;
    
    for (int i = 1; i <= n; i++) {
        int deg = g.adjList[i].size();
        if (deg > 1 && degree_count[deg] == 1) {
            x = deg;
        }
    }

    if (x == 0) {
        for (auto const& [deg, count] : degree_count) {
            if (deg > 1 && count == 1) {
                x = deg;
            }
        }
        if (x == 0) {
            for (auto const& [deg, count] : degree_count) {
                if (deg > 1 && count == x + 1) {
                    x = deg;
                }
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (g.adjList[i].size() == 1) {
            int neighbor = g.adjList[i][0];
            y = g.adjList[neighbor].size() - 1;
            break;
        }
    }

    x = m / (y + 1);

    cout << x << " " << y << el;
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    if (cin >> t) {
        while (t--){
             solve();
        }
    }
    return 0;
}