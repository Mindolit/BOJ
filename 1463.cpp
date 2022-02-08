#include<iostream>
using namespace std;
#define MAX 1000000
#define INT_MAX 2147483647
int dp[MAX];
int main(){
  fill_n(dp,MAX,0);
  int x,result;
  cin>>x;

  for(int i=2; i<=x; i++)
  {
    int a=INT_MAX;
    int b=INT_MAX;
    int c=INT_MAX;
    if (i%3==0){
      a=dp[i/3]+1;
    }
    if (i%2==0){
      b=dp[i/2]+1;
    }
  
    c=dp[i-1]+1;
    
    dp[i]=min(min(a,b),c);
  }
  cout<<dp[x];

  system("pause");
}
