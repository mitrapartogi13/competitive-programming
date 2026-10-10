// Author: Lumeron
// Created at: 2026-05-20 23:08

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
    ll n; cin >> n;
    graph g;
    g.init(n + 1);
    vector<int> roots;

    for (int i = 1; i <= n; i++) {
        int p;
        cin >> p;
        if (p == -1) {
            roots.pb(i);
        } else {
            g.add_edge(p, i);
        }
    }

    int max_depth = 0;

    for (int root : roots) {
        vector<int> depth(n + 1, 0);
        queue<long> q;

        q.push(root);
        depth[root] = 1;
        max_depth = max(max_depth, depth[root]);

        while (!q.empty()) {
            long temp = q.front();
            q.pop();

            for (auto vertex : g.adjList[temp]) {
                if (depth[vertex] == 0) {
                    depth[vertex] = depth[temp] + 1;
                    max_depth = max(max_depth, depth[vertex]);
                    q.push(vertex);
                }
            }
        }
    }

    cout << max_depth << el;
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t  = 1;
    while (t--){
         solve();
    }
    return 0;
}