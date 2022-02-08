#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N,TestCase;
  pair<int,int>Fibo[41];
  Fibo[0].first=1;
  Fibo[0].second=0;
  Fibo[1].first=0;
  Fibo[1].second=1;
  for(int i=2; i<41; i++)
  {
    Fibo[i].first=Fibo[i-1].first+Fibo[i-2].first;
    Fibo[i].second=Fibo[i-1].second+Fibo[i-2].second;
  }
  cin>>TestCase;
  for(int i=0; i<TestCase; i++)
  {
  cin>>N;
  cout<<Fibo[N].first<<" "<<Fibo[N].second<<'\n';
  }
  system("pause");
}