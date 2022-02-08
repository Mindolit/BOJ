#include<iostream>
#include<string>
using namespace std;

int main(){
  string a;
  int location[26];
  fill_n(location,26,-1);
  cin>>a;
  int loop_size=a.length();
  for (int i=0; i<loop_size; i++)
  {
    if(location[int(a[i])-97]==-1){
    location[int(a[i])-97]=i;
    }
  }
  for(int i=0; i<26; i++)
  {
    cout<<location[i]<<" ";
  }
  system("pause");
  return 0;
}