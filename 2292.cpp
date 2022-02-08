#include<iostream>
using namespace std;


int main(){
  int N;
  cin>>N;
  if (N==1)
  {
    cout<<"1";
  }
  else {
    int i=0;
    int j=1;
    int k=1;
    int l=1;
    while(true)
    {
      if(6*i+2<=N&&N<=6*j+1)
      {
        break;
      }
      k++;
      j=k+j;
      i=l+i;
    }
    cout<<k+1;
    system("pause");
  }
}



// 6*0+2 2~7 6    6*1+1      1
// 6*1+2 8~19 12  6*3+1      2
// 6*3+2 20~37 18  6*6+1    3
// 6*6+2 38~61    6*10+1    4

