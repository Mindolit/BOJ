#include<bits/stdc++.h>
using namespace std;

int init(int start, int end, int node, int *tree,int *arr)
{
  if(start==end) 
  {
    return tree[node]=arr[start];
  }
  int mid=(start+end)/2;
  return tree[node]=init(start,mid,node*2,tree,arr)+init(mid+1,end,node*2+1,tree,arr);
}

int sum(int start,int end, int node, int left, int right, int *tree, int *arr)
{
  if(left>end||right<start) 
  {
    return 0;
  }
  if (left<=start && right>=end)
  {
    return tree[node];
  } 
  int mid=(start+end)/2;
  return sum(start,mid,node*2 ,left,right,tree,arr)+sum(mid+1,end,node*2+1,left,right,tree,arr);
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N,M;
  cin>>N>>M;
  int arr[N+1]={0,};
  int SegmentTree[N*4]={0,};
  for(int i=0; i<N; i++)
  {
    cin>>arr[i];
  }
  
  init(0,N-1,1,SegmentTree,arr);
  for(int i=0; i<M; i++)
  {
    int a,b;
    cin>>a>>b;
    cout<<sum(0,N-1,1,a-1,b-1,SegmentTree,arr)<<'\n';
  }
  
}