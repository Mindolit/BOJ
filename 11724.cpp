#include<bits/stdc++.h>
using namespace std;

bool adjs[1001][1001]={{0,},};
bool visited[1001]={0,};

int N,M;
bool solo[1001]={0,};
void Connected_component(){
  queue<int> visit;
  queue<int> component; int Connected_compo=0;
  int solo_component=0;
  for(int i=1; i<=N; i++)
  {
    if(solo[i]==false)
    {
      solo_component++;
    }
  }


  for(int i=1; i<=N; i++)
  {
    for(int j=1; j<=N; j++)
    {
      if(adjs[i][j]==1)
      {
        visit.push(j);
      }
    }
  }
  
  while(!visit.empty()){
    if(visited[visit.front()]==0)
    { 
      Connected_compo++;
      component.push(visit.front());
      visited[visit.front()]=true;
      visit.pop();
      //BFS start;
      while(!component.empty())
      {
        for(int i=1; i<=N; i++)
        {
          if(adjs[component.front()][i]==1){ 
            if(visited[i]==0)
            {
              visited[i]=1;
              component.push(i);
            }
          }
        } 
        component.pop();
      }
      
    }
    else 
    {
      visit.pop();
    }

  }
  cout<<solo_component+Connected_compo<<'\n';

}



int main(){
  cin>>N>>M;
  for(int i=0; i<M; i++)
  {
    int a,b;
    cin>>a>>b;
    solo[a]=true;
    solo[b]=true;
    adjs[a][b]=true;
    adjs[b][a]=true;
  }
  Connected_component();
  system("pause");

}