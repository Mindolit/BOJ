#include<iostream>

int main(){
  int dp[1001];
  int x,a,b,c;
  dp[0]=0;
  dp[1]=1;
  dp[2]=3;
  std::cin>>x;
  for(int i=3; i<=x; i++){
    a=dp[i-2];
    b=dp[i-1];
    c=dp[i-2];
    dp[i]=(a+b+c)%10007;
  }
  std::cout<<dp[x];
  system("pause");
}