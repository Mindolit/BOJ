#include<bits/stdc++.h>
using namespace std;

int main(){
  // ios::sync_with_stdio(0);
  // cin.tie(0);
  stack<pair<int,int>>st; //first==compare,second=ptr;
  queue<int> ans;
  int N,tmp;
  cin>>N;
  for(int i=1; i<=N; i++)
  {
    cin>>tmp;
    while(!st.empty()) {
      if(st.top().first>tmp){
        ans.push(st.top().second);
        break;
      }
      else if(st.top().first<tmp){
        st.pop();
      }
    }

    if(st.empty()) {
      ans.push(0);
    }
    st.push(make_pair(tmp,i));
  }
  while(!ans.empty()){
    if(N==1)
    {
      cout<<ans.front();
      break;
    }
    cout<<ans.front()<<" ";
    ans.pop();
    N--;
  }
  
  system("pause");

}