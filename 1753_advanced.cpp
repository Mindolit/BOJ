#include<bits/stdc++.h>
using namespace std;
#define INF 2100000000

int main(){
  int V,E,K;
  cin>>V>>E>>K;
  vector<pair<int,int>> adj[V+5];
  int distance[V+5];
  fill_n(distance,V+5,INF);
  for(int i=0; i<E; i++)
  {
    int u,v,w;
    cin>>u>>v>>w;
    adj[u].push_back({w,v});
  }

  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
  pq.push({0,K});
  distance[K]=0;
  while(!pq.empty()){
    auto c=pq.top(); pq.pop();
    int dist=c.first;
    int index=c.second;
    if(distance[index]!=dist) continue;
    for(auto next:adj[index]){
      int cost=next.first, nindex=next.second;
      if(distance[nindex]>dist+cost){
        distance[nindex]=dist+cost;
        pq.push({distance[nindex],nindex});
      }
    }
  }

  for(int i=1; i<=V; i++)
  {
    if(distance[i]==INF){
      cout<<"INF"<<'\n';
    }
    else{
      cout<<distance[i]<<'\n';
    }
  }

  system("pause");
}