#include<iostream>
#include<algorithm>
using namespace std;

void binarysearch(int *arr,int num,int start,int end);

int main(){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int N;
  cin>>N;
  int tmp;
  int num;
  int *arr=new int[N];
  for(int i=0; i<N; i++)
  {
    cin>>num;
    arr[i]=num;
  }
  sort(arr,arr+N);
  
  cin>>tmp;
  for(int i=0; i<tmp; i++)
  {
    cin>>num;
    binarysearch(arr,num,0,N-1);
  }
  delete []arr;
  system("pause");
}

void binarysearch(int *arr,int key,int start,int end){
  /*
  arr은 배열
  num은 찾을려하는  타겟
  start는 배열의 시작부분 
  end는 배열의 끝
  */
  if (start>end) 
  {
    cout<<"0"<<'\n';
    return;
  }
  
  int mid=(start+end)/2;
  if (arr[mid]==key)
  {
    cout<<"1"<<'\n';
    return;
  }
  else if(arr[mid]>key)
  {
  return binarysearch(arr,key,start,mid-1);
  }
  else if (arr[mid]<key)
  {
  return binarysearch(arr,key,mid+1,end);
  }
}