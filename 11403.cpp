#include<bits/stdc++.h>
using namespace std;

int N;
int adj[101][101]={{0,},};
int distance[101][101]={{0,}};

void All_Pair_Shortest_Path(){
  for(int i=0; i<N; i++)
  {
    for(int j=0; j<N; j++)
    {
      if(i==j)
      {
      ::distance[i][j]=0;
      }
      else if(adj[i][j]==1)
      {
      ::distance[i][j]=1;
      }
      else
      {
      ::distance[i][j]=210000000;
      }
    }
  }
  for(int i=0; i<N; i++)
  {
    for(int j=0; j<N; j++)
    {
      for(int k=0; k<N; k++)
      {
        ::distance[i][j]=min(::distance[i][j],::distance[i][k]+::distance[k][j]);
      }
    }
  }
  
  for(int i=0; i<N; i++)
  {
    for(int j=0; j<N; j++)
    {
      cout<<::distance[i][j]<<" ";
    }
    cout<<'\n';
  }
}



int main(){
  
  cin>>N;
  for(int i=0; i<N; i++)
  {
    for(int j=0; j<N; j++)
    {
      cin>>adj[i][j];
    }
  }


  All_Pair_Shortest_Path();
  system("pause");
}