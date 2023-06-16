#include<iostream>
#include<vector>
#include<tuple>
#include<algorithm>
using namespace std;
int par[100001] = { 0, }, k;
int getpar(int x) {
	if (par[x] == x) return x;
	else return getpar(par[x]);
}
bool link(int n1, int n2) {
	n1 = getpar(n1);
	n2 = getpar(n2);
	if (n1 != n2) {
		k--;
		if (n1 < n2) par[n2] = n1;
		else par[n1] = n2;
		return 1;
	}
	return 0;
}
int main(void) {
	int n, e, x, y, d;
	long long result = 0;
	cin >> n >> e;
	if(n==2){cout<<0;return 0;}
	for (int i = 1; i <= n; i++)
		par[i] = i;
	vector<tuple<int, int, int>>v;
	while (e--) {
		scanf("%d %d %d", &x, &y, &d);
		v.push_back({ d,x,y });
	}
	sort(v.begin(), v.end());
	k = n;
	for (int i = 0; i < (int)v.size(); i++) {
		int n1 = get<1>(v[i]), n2 = get<2>(v[i]), d = get<0>(v[i]);
		if (link(n1, n2))
			result += d;
		if (k == 2) break;
	}
	cout << result;
	return 0;
}