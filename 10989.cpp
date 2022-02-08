#include<iostream>
using std::cin; using std::cout;

int main(){
  std::ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int a[10001],t=0;
  std::fill_n(a,10001,0);
  cin>>t;
  int temp=0;
  for(int i=0; i<t; i++)
  {
    cin>>temp;
    a[temp]++;
  }

  for(int i=1; i<10001; i++)
  {
    int j=a[i];
    for(int k=0;k<j;k++)
    {
      cout<<i<<'\n';
    }
  }
  system("pause");
  return 0;
}