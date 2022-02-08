#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N,M;
  cin>>N>>M;
  map<string,string>dic;
  
  for(int i=0; i<N; i++)
  {
    string key,value;
    cin>>key>>value;
    dic.insert({key,value});
  }

  for(int i=0; i<M; i++)
  {
    string key;
    cin>>key;
    map<string,string>::iterator itr=dic.find(key);
    pair<string,string>p_tmp=*itr;
    cout<<p_tmp.second<<'\n';
  }

  system("pause");
}