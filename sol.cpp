#include <bits/stdc++.h>

using namespace std;

typedef long long int i64;

const int INF = (1 << 30);
const int MOD = 1e9 + 7;

const i64 INFL = (1LL << 62);
const i64 MODL = 1e9 + 7;

vector<i64> a;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n; cin >> n;
	
	i64 pair<i64, i64> p;
	
	for (int i = 0; i < n; ++i)
	{
		cin >> p[i].first;
	}
	
	for (int i = 0; i < n; ++i)
	{
		cin >> p[i].second;
	}
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			i64 x1 = p[i].first, y1 = p[i].second;
			i64 x2 = p[j].first, y2 = p[i].second;
			
			int sol = 0;
			
			if (x1 != x2 || y1 != y2)
			{
				
			}
		}
	}
	
	return 0;
}