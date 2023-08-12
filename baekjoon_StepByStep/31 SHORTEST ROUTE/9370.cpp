// #include<iostream>
// #include<vector>
// #include<queue>
// #include<algorithm>
// #define INF 2147483647
// using namespace std;
// typedef pair<int,int>p;
// priority_queue<p,vector<p>,greater<p>>q;
// vector<p>*v;
// int n,m,t,s,g,h,a,b,c,w,k;
// void dijkstra(int *res){
// 	fill(res,res+n+1,INF);
// 	res[s]=0;
// 	q.push({0,s});
// 	while(!q.empty()){
// 		int x=q.top().second,d=q.top().first;
// 		q.pop();
// 		if(res[x]<d) continue;
// 		for(int i=0;i<v[x].size();i++){
// 			int dx=v[x][i].first,dd=v[x][i].second+d;
// 			if(res[dx]>dd){
// 				res[dx]=dd;
// 				q.push({dd,dx});
// 			}
// 		}
// 	}
// }
// int main(void){
// 	cin.tie(0);
// 	ios::sync_with_stdio(0);
// 	int T;
// 	cin>>T;
// 	while(T--){
// 		vector<int>ret;
// 		cin>>n>>m>>t;
// 		v=new vector<p>[n+1];
// 		cin>>s>>g>>h;
// 		if(g>h) swap(g,h);
// 		for(int i=0;i<m;i++){
// 			cin>>a>>b>>c;
// 			if(a==g&&b==h) w=c;
// 			v[a].push_back({b,c});
// 			v[b].push_back({a,c});
// 		}
// 		int *res1=new int[n+1],*res2=new int[n+1],*res3=new int[n+1];
// 		dijkstra(res1);
// 		s=g;
// 		dijkstra(res2);
// 		s=h;
// 		dijkstra(res3);
// 		while(t--){
// 			cin>>k;
// 			int r=min(w+res1[g]+res3[k],w+res1[h]+res2[k]);
// 			if(res1[k]==r) ret.push_back(k);
// 		}
// 		sort(ret.begin(),ret.end());
// 		for(int o:ret) cout<<o<<" ";
// 		cout<<"\n";
// 		delete []v;
// 		delete []res1;
// 		delete []res2;
// 		delete []res3;
// 	}
// 	return 0;
// }


#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<tuple>
#define INF 2147483647
using namespace std;
typedef tuple<int,int,bool>p;
priority_queue<p,vector<p>,greater<p>>q;
vector<pair<int,int>>*v;
int n,m,t,s,g,h,a,b,c,w,k,*res;
bool *visit;
void dijkstra(){
	fill(res,res+n+1,INF);
	res[s]=0;
	q.push({0,s,0});
	while(!q.empty()){
		int x=get<1>(q.top()),d=get<0>(q.top()),state=get<2>(q.top());
		q.pop();
		if(res[x]<d) continue;
		for(int i=0;i<v[x].size();i++){
			int dx=v[x][i].first,dd=v[x][i].second+d;
			bool ds=(state||(h==max(x,dx)&&g==min(x,dx)));
			if(res[dx]>dd){
				res[dx]=dd;
				visit[dx]=ds;
				q.push({dd,dx,visit[dx]});
			}
			else if(res[dx]==dd&&!visit[dx]&&ds){
				visit[dx]=ds;
				q.push({dd,dx,visit[dx]});
			}
		}
	}
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int T;
	cin>>T;
	while(T--){
		vector<int>ret;
		cin>>n>>m>>t;
		v=new vector<pair<int,int>>[n+1];
		res=new int[n+1];
		visit=new bool[n+1]{};
		cin>>s>>g>>h;
		if(g>h) swap(g,h);
		for(int i=0;i<m;i++){
			cin>>a>>b>>c;
			v[a].push_back({b,c});
			v[b].push_back({a,c});
		}
		dijkstra();
		while(t--){
			cin>>k;
			if(visit[k]) ret.push_back(k);
		}
		sort(ret.begin(),ret.end());
		for(int o:ret) cout<<o<<" ";
		cout<<"\n";
		delete []v;
		delete []res;
		delete []visit;
	}
	return 0;
}