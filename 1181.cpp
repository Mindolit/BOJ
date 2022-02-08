#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool compare(string a,string b){
  if(a.size()==b.size())
  {
    return a<b;
  }
  return a.size()<b.size();
}



int main(){
  int N;
  cin>>N;
  string *s=new string[N];
  for(int i=0; i<N; i++)
  {
    cin>>s[i];
  }
  sort(s,s+N,compare);
  cout<<s[0]<<'\n';
  for(int i=1; i<N; i++)
  {
    if (s[i]==s[i-1])
    {
      continue;
    }
    {cout<<s[i]<<'\n';}
  }
  delete[] s;
  system("pause");
}