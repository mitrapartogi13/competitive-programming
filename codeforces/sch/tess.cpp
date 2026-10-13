#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int tn = 0;
	priority_queue<int> a;
	for(int i=0;i<n;i++){
		int maks = 0;
		for(int j=0;j<m;j++){
			int b;
			cin >> b;
			a.push(b);
			if(b>maks) maks = b;
		}
		tn += maks;
	}
	int tr = 0;
	for(int i=0;i<n;i++){
		tr+=a.top();
		a.pop();
	}
	cout << tn << " " << tr;
}