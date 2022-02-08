#include<iostream>
#include<algorithm>
using namespace std;

long long M=0;
int N=0;

void get_input(int *p,int N)
{
  for(int i=0; i<N; i++)
  {
    cin>>p[i];
  }
}

bool is_able(int *array,int h)
{
  long long taken=0;
  for(int i=0; i<N; i++)
  {
    if(array[i]>=h)
    {
      taken+=array[i]-h;
    }
    if(taken>=M)
    {
      return true;
    }
  }
  return false;
}

int binary_finder(int *array,long long left, long long right)
{
  long long temp=0,mid=0;
  while(left<=right)
  {
    mid=(left+right)/2;
    if(is_able(array,mid))//true
    {
      temp=mid;
      //가능하면 우측으로 이동해야 한다.
      left=mid+1;
    }
    else//false
    {
      //불가능하면 왼쪽으로 이동해서 탐색
      right=mid-1;
    }
  }
  return temp;
}

long long find_(int *array,int rttype)
{
  long long min=210000000;
  long long max=-1;
  for(int i=0; i<N; i++)
  {
    if(array[i]<=min)
    {
      min=array[i];
    }
    if(array[i]>=max)
    {
      max=array[i];
    }
  }
  if(rttype==0)
  {
    return min;
  }
  else
  {
    return max;
  }

}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long H=0;
  cin>>N>>M;
  int *array=new int[N];
  get_input(array,N);  
  sort(array,array+N); //정렬
  long long small=find_(array,0);
  long long big=find_(array,1);
  cout<<binary_finder(array,small,big);
  delete []array;
  system("pause");
}