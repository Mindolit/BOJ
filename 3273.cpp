#include<bits/stdc++.h>
using namespace std;
#define MAX 1000001
bool number[MAX]={0,};

int main(){
  int n,x,count=0;
  int tmp;
  cin>>n;
  for(int i=1; i<=n; i++)
  {
    cin>>tmp;
    number[tmp]=true;
  }
  cin>>x;

  for(int i=1; i<MAX; i++)
  {
    int need_idx=x-i;
    if(need_idx>=0){
    if (need_idx<1000001){
      if(number[i]==true&&number[need_idx]==true)
      {
        count++;
      } 
    }
  }
  }
  cout<<count/2;
  system("pause");
}