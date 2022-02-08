#include<bits/stdc++.h>
#define INF 214783647
using namespace std;
void Dijkstra(vector<pair<int,int>> *adj,int *distance,int start_node);
int main(){
  //ios_base::sync_with_stdio(0);
  //cin.tie(0);
  int Node,Edge,Start_node;
  cin>>Node>>Edge>>Start_node;
  vector<pair<int,int>> adj[Node+1];
  int distance[Node+1];
  fill_n(distance,Node+1,INF);

  for(int i=0; i<Edge; i++){
    int u,v,w;
    cin>>u>>v>>w;
    adj[u].push_back(make_pair(w,v)); //가중치,vertax
  }
  //입력
  
  Dijkstra(adj,distance,Start_node);
  
  for(int i=1; i<=Node; i++){
    if(distance[i]==INF){
      cout<<"INF"<<'\n';
    }
    else
    cout<<distance[i]<<'\n';
  }
  system("pause");
}


void Dijkstra(vector<pair<int,int>> *adj,int *distance,int start_node){
  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
  pq.push({0,start_node});
  distance[start_node]=0;
  while(!pq.empty()){
    auto tmp=pq.top(); pq.pop();
    int dist=tmp.first, index=tmp.second;
    if(distance[index]!=dist) continue;
    for(auto next:adj[index]){
      int cost=next.first, nindex=next.second;
      if(distance[nindex]>cost+dist){
        distance[nindex]=cost+dist;
        pq.push({distance[nindex],nindex});
      }
    }
  }
}