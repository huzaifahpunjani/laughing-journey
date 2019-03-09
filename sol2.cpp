#include <bits/stdc++.h>

using namespace std;

typedef long long int i64;

int main()
{
	int n, m; cin >> n >> m;
	
	vector< vector<int> > adjList(n + 1);
	
	for (int i = 0, u, v; i < m; ++i)
	{
		cin >> u >> v;
		
		adjList[u].push_back(v);
		adjList[v].push_back(u);
	}
	
	priority_queue<int, vector<int>, greater<int> > pq;
	bool vis[n + 1] = {};
	
	pq.push(1);
	
	while (!pq.empty())
	{
		int curr = pq.top();
		pq.pop();
		
		if (vis[curr]) continue;
		else vis[curr] = true;
		
		cout << curr << " ";
		
		for (int i = 0; i < adjList[curr].size(); ++i)
		{
			if (!vis[adjList[curr][i]]) pq.push(adjList[curr][i]);
		}
	}
	
	cout << endl;
	
	return 0;
}