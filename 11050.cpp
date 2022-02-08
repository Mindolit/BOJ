#include<iostream>
using namespace std;


int main(){
  int N,K;
  cin>>N>>K;
  int big=1,min=1;
  for(int i=0; i<K; i++)
  {
    big*=N-i;
  }
  for(int i=0; i<K;i++)
  {
    min*=K-i;
  }
  cout<<big/min;

  system("pause");





}