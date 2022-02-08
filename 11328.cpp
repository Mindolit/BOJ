#include<bits/stdc++.h>
using namespace std;

int main(){
  int TestCase;
  cin>>TestCase;
  int input_one[26]={0,};
  int input_two[26]={0,};
 
  string tmp,tmp2;
  for(int i=0; i<TestCase; i++)
  {
    bool is_possible=true;
    memset(input_one,0,sizeof(input_one));
    memset(input_two,0,sizeof(input_two));
    cin>>tmp>>tmp2;
    if(tmp.size()!=tmp2.size())
    {
      is_possible=false;
      goto print;
    }
    else{
      for(int i=0; i<tmp.size(); i++)
      {
        input_one[tmp[i]-'a']++;
        input_two[tmp2[i]-'a']++;
      }
      for(int i=0; i<25; i++)
      {
        if (input_one[i]!=input_two[i])
        {
          is_possible=false;
          break;
        }
      }
    }
    print:
    if(is_possible==true)
    {
      cout<<"Possible"<<'\n';
    }
    else
    {
      cout<<"Impossible"<<'\n';
    }
  }
}