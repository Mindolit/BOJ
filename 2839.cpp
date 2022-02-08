#include<iostream>
using namespace std;

int main(){
  int T;
  int array[5001];
  int Tarray[10]={2,3,4,3,4,3,4,5,4,5};
  int i_arr[10]={10,11,12,13,14,15,16,17,18,19};
  fill_n(array,5001,0);
  cin>>T;
  array[3]=1; array[5]=1;
  array[6]=2; 
  array[8]=2; array[9]=3;
  for(int i=10; i<5001; i++)
  {
    for(int j=0; j<10; j++)
    {
    if(i==i_arr[j])
    {
      array[i]=Tarray[j];
      Tarray[j]+=2;
      i_arr[j]+=10;
    }
    }
  }
  if(array[T]!=0)
  {
  cout<<array[T]<<'\n';
  }
  else
  {
    cout<<"-1"<<'\n';
  }
  system("pause");
}