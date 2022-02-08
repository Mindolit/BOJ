#include<bits/stdc++.h>
using namespace std;

int main(){
  int TestCase=0;
  int word[26]={0,};
  int word2[26]={0,};
  int count=0;
  string string ,string2;
  cin>>string>>string2;
  for(int i=0; i<string.size(); i++)
  {
    word[string[i]-'a']++;
  }
  for(int i=0; i<string2.size(); i++)
  {
    word2[string2[i]-'a']++;
  }
  for(int i=0; i<26; i++)
  {
    count+=abs(word[i]-word2[i]);
  }

  cout<<count<<'\n';
  system("pause");
}

