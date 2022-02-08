#include<bits/stdc++.h>
using namespace std;


int main(){
  int TestCase;
  cin>>TestCase;

  for(int i=0; i<TestCase; i++)
  {
    list<char> Li;
    list<char>::iterator itr=Li.begin();
    string s;
    cin>>s;
    for(char c:s)
    {
      if(c!='<'&&c!='>'&&c!='-')
      {
        Li.insert(itr,c);
      }
      else if(c=='-')
      {
        if(itr!=Li.begin())
        {
          itr--;
          itr=Li.erase(itr);
          
        }
      }
      else if(c=='<')
      {
        if(itr!=Li.begin())
        {
          itr--;
        }
      }
      else if(c=='>')
      {
        if(itr!=Li.end())
        {
          itr++;
        }
      }
    }
    for(char c:Li)
    {
      cout<<c;
    }
    cout<<'\n';
  }
}