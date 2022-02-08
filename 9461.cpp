#include<bits/stdc++.h>
using namespace std;

int main(){
  long long array[110]={0,};
  array[0]=1;
  array[1]=1,array[2]=1;
  array[3]=2,array[4]=2;
  array[5]=3;
  for(int i=6; i<110; i++)
  {
    array[i]=array[i-1]+array[i-5];
  }


  int TestCase,n;
  cin>>TestCase;
  for(int i=0; i<TestCase; i++)
  {
  cin>>n;
  cout<<array[n-1]<<'\n';
  }
  system("pause");


}


