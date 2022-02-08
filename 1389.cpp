#include<bits/stdc++.h>
using namespace std;

int adjs[101][101];
int kebin[101];
void BFS(int target){
  queue<int>que;
  int visited[101]={0,};
  int count=1;
  int sum=0;
  int push1=1,push2=0;
  que.push(target);
  bool changer=true;
  while(!que.empty())
  {
    int tmp=que.front();
    visited[tmp]=1;
    
    for(int i=0; i<101; i++)
    {
      if (adjs[tmp][i]==1)
      {
        if(visited[i]==0)//방문하지 않았다면
        {
          visited[i]=1;//방문처리
          que.push(i);
            if(changer==true)
            {
              push2++;
            }
            else
            {
              push1++;
            }
          sum+=count;
        }
      }
    
    }
    que.pop();
    if (changer==true)
    {
      push1--;
      if(push1==0)
      {
        changer=false;
        count++;
      }
    }
    else
    {
      push2--;
      if(push2==0)
      {
        changer=true;
        count++;
      }
    }
   
    
  }
  kebin[target]=sum;
}

int main(){
  int N,M,a,b;
  cin>>N>>M;
  fill_n(kebin,101,210000000);
  for(int i=0; i<M; i++)
  {
    cin>>a>>b;
    adjs[a][b]=1;
    adjs[b][a]=1;
  }
  for(int i=1; i<N; i++)
  {
    BFS(i);
  }

  int min=10000000;
  int pos;
  for(int i=0; i<101; i++)
  {
    if(min>kebin[i])
    {
      min=kebin[i];
      pos=i;
    }
  }

  cout<<pos<<'\n';
  system("pause");
}