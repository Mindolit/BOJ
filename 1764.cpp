#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N,M,count=0;
  map<string,int>s;
  cin>>N>>M;
  string tmp;
  for(int i=0; i<N; i++)
  {
    cin>>tmp;
    s.insert({tmp,0});
  }

  for(int j=0; j<M; j++)
  {
    cin>>tmp;
    if(s.find(tmp)!=s.end())
    {
      s[tmp]=1;
      count++;
    }
  }
  cout<<count<<'\n';
  for(auto itr=s.begin(); itr!=s.end(); itr++)
  {
    if(itr->second==1)
    {
      cout<<itr->first<<'\n';
    }
    
  }

  system("pause");


}