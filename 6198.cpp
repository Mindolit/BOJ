#include<bits/stdc++.h>
using namespace std;

int num[8000001];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int N,tmp;
  long long ans=0;
  cin>>N;
  for(int i=1; i<=N; i++){
    cin>>tmp;
    num[i]=tmp;    
  }
  stack<int>st;
  for(int i=1; i<=N; i++){
    while(!st.empty()){
      if(st.top()>num[i]){ //top==왼쪽 빌딩 num[i]==현재 빌딩
        break;
      }
      else if(st.top()<=num[i]){
        st.pop();
      }
    }
    st.push(num[i]);
    ans+=st.size()-1;
  }
  cout<<ans<<'\n';
  system("pause");
}