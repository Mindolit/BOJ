#include<bits/stdc++.h>
using namespace std;
bool adjs[101][101];

int BFS(int a){
  queue<int> visite;//방문해야하는 곳 
  int visited[101]={0,};//방문 했던 곳,
  fill_n(visited,101,0);
  visite.push(a);
  visited[1]=1;
  while(!visite.empty())
  {
    int node=visite.front();
    for(int i=0; i<101; i++)
    {
      if(adjs[node][i]==1) //간선이 존재함
      {
        if (visited[i]==0)
        {
            visite.push(i);
            visited[i]=1;
        }
      }
    }
    visite.pop();
  }
  int count=0;
  for(int i=0; i<101; i++)
  {
    if(visited[i]==1)
    count++;
  }

  return count-1;

}



int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a,b;
  int Computer,connect;
  cin>>Computer>>connect;
  for(int i=0; i<connect; i++)
  {
    cin>>a>>b;
    adjs[a][b]=true;
    adjs[b][a]=true;
  }
  
  cout<<BFS(1);

  system("pause");
}