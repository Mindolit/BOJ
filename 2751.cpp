#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int TestCase=0;
  cin>>TestCase;
  int *arr=new int[TestCase];
  for(int i=0; i<TestCase; i++)
  {
    cin>>arr[i];
  }
  sort(arr,arr+TestCase);
  for(int i=0; i<TestCase; i++)
  {
    cout<<arr[i]<<'\n';
  }
  system("pause");
}
