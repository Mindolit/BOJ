#include<bits/stdc++.h>
using namespace std;

int main(){
  string num;
  cin>>num;
  bool is_you=false;

  for(int i=0; i<num.size(); i++)
  {
    if(num.size()==1)
    break;
    string a=num.substr(0,i+1);
    string b=num.substr(i+1,num.size());
    int a_tmp=1;
    int b_tmp=1;
    for(int j=0; j<a.size(); j++)
    {
      a_tmp*=a[j]-'0';
    }
    for(int j=0; j<b.size(); j++)
    {
      b_tmp*=b[j]-'0';
    }
    if(a_tmp==b_tmp)
    {
      cout<<"YES"<<'\n';
      is_you=true;
      break;
    }
  }
  if(is_you==false)
  {
    cout<<"NO"<<'\n';
  }
  system("pause");
}