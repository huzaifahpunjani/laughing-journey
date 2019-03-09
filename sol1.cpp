#include<bits/stdc++.h>

using namespace std;


int main()
{
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int h1,m1,h2,m2;
	char c;
	cin >> h1 >> c >> m1 >> h2 >> c >> m2;

	int minutes = 0;
	if (h2 >= h1)
		minutes += (h2-h1)*60;
	else minutes += (24-h1)*60 + h2*60;


	if (m2 >= m1) {
		minutes += (m2-m1);
		// minutes -= 60;
	}
	else {
		minutes += (60-m1)+m2;
		minutes -= 60;
	}

	minutes /= 2;

	m1 += minutes;
	// if (m1 >= 60)
	// {
		int temp = m1/60;
		h1 += temp;
		m1 %= 60;
	// }
	h1 %= 24;
	cout << setfill('0') << setw(2) << h1;
	cout << ":";
	cout << setfill('0') << setw(2) << m1;
	
	return 0;
}