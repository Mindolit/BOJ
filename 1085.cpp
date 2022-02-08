#include<iostream>
using namespace std;


int main(){
  int x,y,w,h;
  cin>>x>>y>>w>>h;
  int left=0,right=0,top=0,bottom=0;
  left=x;
  right=w-x;
  top=h-y;
  bottom=y;
  int min=1001;
  int arr[4]={left,right,top,bottom};
  for(int i=0; i<4; i++)
  {
    if(min>arr[i])
    {
      min=arr[i];
    }
  }
  cout<<min;

  system("pause");



}