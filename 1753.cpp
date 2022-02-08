#include<bits/stdc++.h>
using namespace std;
#define INF 2147483647
int Vertax,Edge,target_node,node,edge,weight;
bool is_all_visited(bool *visited);
void Dijkstra(int *weight, bool* visited,list<pair<int,int>> *adj, int target);
int Minimum_node(int *array,bool *visited);

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin>>Vertax>>Edge>>target_node;
  int weight_array[Vertax+1];
  bool visited[Vertax+1];
  fill_n(visited,Vertax+1,false);
  fill_n(weight_array,Vertax+1,INF);
  list<pair<int,int>>adj[Vertax+1];//pair.first==edge, pair.seocond==weight
  for(int i=0; i<Edge; i++){
    cin>>node>>edge>>weight;
    adj[node].push_back(make_pair(edge,weight));
  }
  visited[target_node]=true;
  weight_array[target_node]=0;
  for(auto itr=adj[target_node].begin(); itr!=adj[target_node].end(); itr++){
    weight_array[itr->first]=itr->second;
  }
  while(true){
    int min_loc=Minimum_node(weight_array,visited);
    if(min_loc!=-1){
      Dijkstra(weight_array,visited,adj,min_loc);
    }
    else{
      break;
    }
  }
  for(int i=1; i<=Vertax; i++){
    if(weight_array[i]==INF){
      cout<<"INF"<<'\n';
    }
    else{
    cout<<weight_array[i]<<'\n';
    }
  }

  system("pause");

}

bool is_all_visited(bool *array){
  for(int i=1; i<=Vertax; i++){
    if(array[i]==false){return false;}
  }
  return true;
}

int Minimum_node(int *array,bool *visited){
  int idx=-1,min=INF;
  for(int i=1; i<=Vertax; i++){
    if(min>array[i]&&visited[i]==false){
      min=array[i];
      idx=i;
    }
  }
  return idx;
}

void Dijkstra(int *weight, bool* visited,list<pair<int,int>> *adj, int target){
  for(auto itr=adj[target].begin(); itr!=adj[target].end(); itr++){
    if(visited[itr->first]==false){
      if(weight[itr->first]>weight[target]+itr->second)
      {
        weight[itr->first]=weight[target]+itr->second;
      }
    }
  }
  visited[target]=true;
}


