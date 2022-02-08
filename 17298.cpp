#include<bits/stdc++.h>
using namespace std;

int num[1000001];
int main(){
  // ios::sync_with_stdio(0);
  // cin.tie(0);
  stack<int> st;
  
  stack<int> ans;
  int testcase,tmp,max;
  cin>>testcase;
  //input start 
  for(int i=0; i<testcase; i++)
  {
    cin>>tmp;
    num[i]=tmp;
  }
  //input finish
 
  for(int i=testcase-1; i>=0; i--)
  {
    while(!st.empty())
    {
      if(st.top()>num[i])
      {
        ans.push(st.top());
        st.push(num[i]);
        break;
      }
      else
      {
        st.pop();
      }
    }
    if(st.empty()){
      ans.push(-1);
      st.push(num[i]);
    }
  }
  while(!ans.empty())
  {
    if(testcase==1)
    {
      cout<<ans.top();
      break;
    }
    else{
    cout<<ans.top()<<" ";
    ans.pop();
    testcase--;
    }
  }
  
  system("pause");
}