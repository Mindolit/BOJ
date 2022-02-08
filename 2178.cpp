#include<bits/stdc++.h>
using namespace std;


int adj[101][101]={0,};
bool adj_[101][101][101][101]={{{{0,},},},};
vector<string> v;

void BFS(int N,int M){
  queue<pair<int,int>> visit;
  bool visited[101][101]={{false,},};
  visit.push(make_pair(0,0));
  int c1=1,c2=0,count=0;
  bool changer=true;
  visited[0][0]=true;
  while(!visit.empty())
  { 
    pair<int,int>tmp=visit.front();
    for(int i=0; i<101; i++)
    {
      for(int j=0; j<101; j++)
      {
        if(adj_[tmp.first][tmp.second][i][j]==1)
        {
          
          if(visited[i][j]==false)
          {
            visited[i][j]=true;
            visit.push(make_pair(i,j));
            if((tmp.first==N-2&&tmp.second==M-1)||(tmp.first==N-1&&tmp.second==M-2))
            {
              count++;
              count++;
              goto finish;
            }
            if(changer)
            {
              c2++;
            }
            else
            {
              c1++;
            }
          }
          
        }
      }
    }
    visit.pop();
    if(changer)
    {
      c1--;
      if(c1==0)
      {
        count++;
        changer=false;
      }
    }
    else
    {
      c2--;
      if(c2==0)
      {
        count++;
        changer=true;
      }
    }
    
  }
finish:
cout<<count<<'\n';

}

int main(){
  int N,M,col=0;
  cin>>N>>M;
  string tmp;
//표준입력 시작
  for(int i=0; i<N; i++)
  {
    cin>>tmp;
    v.push_back(tmp);
  }
//표준입력 끝

//string to int
  while(!v.empty())
  {
    tmp=v.front();
    for(int i=0; i<tmp.size(); i++)
    {
      adj[col][i]=tmp[i]-'0';
    }
    col++;
    v.erase(v.begin());
  }
//string to int

//adj 구축시작

for(int i=0; i<N; i++)
{
  for(int j=0; j<M; j++)
  {
    //상
    if(i-1!=-1)
    {
      if(adj[i][j]==1&&adj[i-1][j]==1)
        {adj_[i][j][i-1][j]=1;}
    }
    //하
    
    if(i+1!=N)
    {
      if(adj[i][j]==1 && adj[i+1][j]==1)
        {adj_[i][j][i+1][j]=1;}
    }
    //좌
    if(j-1!=-1)
    {
      if(adj[i][j]==1&adj[i][j-1]==1)
        {adj_[i][j][i][j-1]=1;}
    }
    //우
    if(j+1!=M)
    {
      if(adj[i][j]==1&&adj[i][j+1]==1)
        {adj_[i][j][i][j+1]=1;}
    }
  }
}


//adj 구축 끝

  BFS(N,M);

  std::system("pause");
}