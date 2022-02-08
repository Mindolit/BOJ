#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int *s_array=new int[n];
  s_array[0]=0;
  s_array[1]=1;
  s_array[2]=2;
  for(int i=3; i<=n; i++)
  {
    s_array[i]=(s_array[i-1]+s_array[i-2])%10007;
  } 
  cout<<s_array[n];
  delete[] s_array;
}