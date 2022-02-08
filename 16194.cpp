#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int N;
  cin>>N;
  int in[10001];
  int max_[10001];
  int tmp[10001];
  fill_n(max_,10001,0);
// 입력
  for(int i=1; i<=N; i++)
  { 
    cin>>in[i];
  }


//계산
  for(int i=1;i<=N; i++)
  {
    for(int j=1; j<=i; j++)
    {
      tmp[j]=max_[i-j]+in[j];
      max_[i]=tmp[j];
    }   
    for(int j=1; j<=i; j++)
    {
      max_[i]=min(max_[i],tmp[j]);
    }
  }
 
  cout<<max_[N];
  system("pause");
  return 0;
}