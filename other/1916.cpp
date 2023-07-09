#include<iostream>
#include<vector>
#include<queue>
#define INF 1000000000;
using namespace std;
vector<pair<int, int>>* a;
bool* visit;
int* d1;
int dijkstra(int start, int end) {
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>q;
	d1[start] = 0;
	q.push(make_pair(0, start));
	while (!q.empty()) {
		int x = q.top().second, k = q.top().first;
		q.pop();
		if (visit[x]) continue;
		visit[x] = 1;
		for (int i = 0; i < (int)a[x].size(); i++) {
			int n = a[x][i].first, d = a[x][i].second;
			if (k + d < d1[n]) {
				d1[n] = k + d;
				q.push(make_pair(d1[n], n));
			}
		}
	}
	return d1[end];
}
int main(void) {
	int n, m, s, e, d;
	cin >> n >> m;
	a = new vector<pair<int, int>>[n + 1];
	visit = new bool[n + 1]();
	d1 = new int[n + 1]();
	for (int i = 1; i <= n; i++)
		d1[i] = INF;
	while (m--) {
		scanf("%d %d %d", &s, &e, &d);
		a[s].push_back(make_pair(e, d));
	}
	scanf("%d %d",&s,&e);
	cout<<dijkstra(s, e);
	return 0;
}