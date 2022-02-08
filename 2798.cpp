#include<iostream>
using namespace std;

int main(){
  int N,M,tmp;
  int max_ptr=0;
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin>>N>>M;
  int *array=new int[N];
  int *max=new int[N*N*N+1];
  fill_n(max,N*N*N+1,-1);
  for(int i=0; i<N; i++)
  {
    cin>>tmp;
    array[i]=tmp;
  }
  bool loop=true;
  for(int i=0; i<N; i++)
  {
    for(int j=i+1; j<N; j++)
    {
      for(int k=j+1; k<N; k++)
      {
        if(array[i]+array[j]+array[k]<M){
        max[max_ptr]=array[i]+array[j]+array[k];
        max_ptr++;
        }
        if(array[i]+array[j]+array[k]==M)
        {
          max[max_ptr]=array[i]+array[j]+array[k];
          loop=false;
          break;
        }
      }
      if (loop==false){
        break;
      }
    }
    if (loop==false){
        break;
      }
  }
  int max_=-1;
  for(int i=0; i<N*N*N+1; i++)
  {
    if(max_<max[i]){
      max_=max[i];
    }
  }
  cout<<max_;
  delete[] array;
  delete[] max;
  system("pause");
}