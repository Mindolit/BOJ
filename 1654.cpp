#include<iostream>
using namespace std;
long long N,K;
long long get_input(long long *arr,long long size){
  long long max=0;
  for(long long i=0;i<size;i++)
  {
    cin>>arr[i];
    if(max<=arr[i])
    {
      max=arr[i];
    }
  }
  return max;
}

long long how_many_mk(long long *arr,long long mid){
  long long lenline=0;
  for(long long i=0; i<N; i++)
  {
    if(mid==0)
    {
      break;
    }
    lenline+=arr[i]/mid;
  }


  return lenline;
}

long long solve_binary_search(long long *arr,long long left, long long right)
{
  long long result=0;
  long long mid=0;
  while(left<=right)
  {
    mid=(left+right)/2;
    long long line=how_many_mk(arr,mid);
    if(line>=K)
    {
      left=mid+1;
      if(result<mid)
      {
        result=mid;
      }
    }
    else if(line<K) 
    {
      right=mid-1;
    }
    
  }

  return result;
}


int main(){
  cin>>N>>K;
  long long *arr=new long long[N];
  long long max=get_input(arr,N);
  cout<<solve_binary_search(arr,1,max);
  delete[] arr;
  system("pause");
}