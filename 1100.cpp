#include<bits/stdc++.h>
using namespace std;


int main(){
  string s[9];
  for(int i=0; i<8; i++)
  {
    cin>>s[i];
  }
  int count=0;
  bool is_zero=true;
  for(int i=0; i<8; i++)
  {
    for(int j=0; j<8; j++)
    {
      if(is_zero==true)
      {
        if (j%2==0)
        {
          if(s[i][j]=='F')
          {
            count++;
          }
        }
      }
      else
      {
        if (j%2!=0)
        {
          if(s[i][j]=='F')
          {
            count++;
          }
        }
      }
    }

    is_zero=!is_zero;
  }

  cout<<count<<'\n';
  system("pause");

}