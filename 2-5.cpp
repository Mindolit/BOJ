#include<bits/stdc++.h>
using namespace std;

void print_list(list<pair<int,int>> l[3][3])
{
	list<pair<int,int>>::iterator it=l[0][0].begin();
	pair<int,int> tmp=*it;
	cout<<tmp.first<<" "<<tmp.second;
}


int BFS(int x,int y,list<pair<int,int>> adjs[][3], int tomato[][3])
{
  int day=0;
  queue<pair<int,int>> que;
  list<pair<int,int>>visited;
  while(true)
  {
    day++;
    list<pair<int,int>>::iterator it; 
    it=adjs[x][y].begin();
    visited.push_back(make_pair(x,y)); //x,y방문처리
    tomato[x][y]=1;
    for(;it!=adjs[x][y].end();it++)
    {
      pair<int,int> temp=*it;
      list<pair<int,int>>::iterator lt=visited.begin();
      lt=find(visited.begin(),visited.end(),temp);
      if (lt!=visited.end())//x,y의 인접 노드 들을 방문했다면
      {
        continue;
      }
      else //x,y의 인접 노드 들을 방문 안했다면 queue에 집어넣기
      {
        que.push(temp);
      }
    }
    //que가 비어있으면 더 이상 탐색 불가하다고 판단 
    if(que.empty())
    {
      break;
    }
  }
  return day;
}

int main(){
	list<pair<int,int>> lt[3][3];
	int toma[3][3];
	lt[0][0].push_back(make_pair(1,1));
	cout<<BFS(3,3,lt,toma);
	print_list(lt);
	system("pause");


}
