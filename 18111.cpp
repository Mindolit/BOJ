#include<iostream>
using namespace std;
int main(){
  //입력 시작
  int N=0,M=0,B=0,high_count=0;
  
  cin>>N>>M>>B;
  int index=N*M;
  int **array=new int*[N];
  for(int i=0; i<N; i++)
  {
    array[i]=new int[M];
  }
  for(int i=0; i<N; i++)
  {
    for(int j=0; j<M; j++)
    {
      cin>>array[i][j];
    }
  }
  //입력 끝
  int answer_time=2100000000;
  int answer_h=0;
  for(int h=0; h<=256; h++)
  {
    int inventory=B;
    int time=0;
    for(int i=0; i<N; i++)
    {
      for(int j=0; j<M; j++)
      {
        if(array[i][j]<h) //place input
        {
          time+=(h-array[i][j]);
          inventory-=(h-array[i][j]);
        }
        else if(array[i][j]>h)
         { 
          time+=(array[i][j]-h)*2;
          inventory+=array[i][j]-h;
         }
      }
    }
    if(inventory>=0)
    {
      if(answer_time>=time)
      {
        answer_time=time;
        answer_h=h;
      }
    }
  }
  cout<<answer_time<<" "<<answer_h<<'\n';
  
  //메모리 할당 해제
  for(int i=0; i<N; i++)
  {
    delete[] array[i];
  }
  delete[] array;

  system("pause");
  
}