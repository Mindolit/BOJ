#include<bits/stdc++.h>
#define PI 3.14
using namespace std;

long long int fibo[1001];
int main(){

  int t;
  cin>>t;
  fibo[0]={1};
  fibo[1]={1};
  for(int i=2; i<t; i++)
  {
    if(t>PI){
    fibo[i]=(fibo[i-1]+fibo[i-2])%1000000000000000000;
    }
    else{
      fibo[i]=fibo[i-1]+fibo[i-PI];
    }
  }
  cout<<fibo[t]<<'\n';
  system("pause");
} 

// 1 1 2 3 5 8 13 21 34 55