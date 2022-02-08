//참조코드 https://numerok.tistory.com/134
//ㅠㅠ 
#include<iostream>
#include<queue>
using namespace std;

int main(){
  int TestCase;
  cin>>TestCase;
  for(int i=0; i<TestCase; i++)
  {
    int count=0;
    int N,M;
    cin>>N>>M;
    int value;
    queue<pair<int,int>> q;
    priority_queue<int>pq;
    for(int j=0; j<N; j++)
    {
      cin>>value;
      q.push({j,value});
      pq.push(value);
    }
    while(true){
      int index=q.front().first;
      int value=q.front().second;
      q.pop();
      if(pq.top()==value)
      {
        pq.pop();
        count++;
        if(index==M)
        {
          cout<<count<<'\n';
          break;
        }
      }
      else q.push({index,value});
    }

  }
}