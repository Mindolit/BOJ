#include<iostream>
using namespace std;

int main(){
  int TestCase;
  int h,w,n;
  cin>>TestCase;
  for(int i=0; i<TestCase; i++){
  cin>>h>>w>>n;
  bool **array=new bool*[w+1];
  for(int i=0; i<w+1; i++)
  {
    array[i]=new bool[h+1];
  }

  int x=0,y=0;
  bool loop=true;
  for(int i=1; i<=w; i++)
  {
    for(int j=1; j<=h; j++)
    {
      array[i][j]=true;
      n--;
      if (n==0)
      { x=i;y=j;
      loop=false;
      break;}
    }
    if(loop==false)
    {break;}
  }

  if(x<10)
  {
    cout<<y<<"0"<<x<<'\n';
  }
  else
  {
    cout<<y<<x<<'\n';
  }

  for(int i=0; i<w+1; i++)
  {
    delete [] array[i];
  }
  delete[] array;
  }
  system("pause");
}  