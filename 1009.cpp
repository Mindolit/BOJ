#include<bits/stdc++.h>
using namespace std;

int main(){
  int T;
  cin>>T;
  for(int t=0; t<T; t++)
  {
    int a=0,b=0,c=0;
    cin>>a>>b;
    c=a;
    for(int i=1; i<b; i++)
    {
      c=c*a%10;
    }
    if(c%10==0)
    {
      cout<<"10"<<'\n';
    }
    else
    {
      cout<<c%10<<'\n';
    }
  }

}