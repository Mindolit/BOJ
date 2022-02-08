#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[11]={0,},N,K;
  cin>>N>>K;
  for(int i=1; i<=N; i++)
  {
    cin>>arr[i];
  }
  
  int count=0;
  for(int i=N; i>0; i--)
  {
    if(K/arr[i]>=1)
    {
      count+=K/arr[i];
      K=K-(K/arr[i]*arr[i]);
    }
  }
  cout<<count<<'\n';
  system("pause");

}