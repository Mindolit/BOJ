#include<iostream>
using namespace std;

int main(){
  int n;
  int result[10];
  bool result_bool[10];
  fill_n(result_bool,10,true);
  int count=10;
  for (int i=0; i<10; i++)
  {
    cin>>n;
    result[i]=n%42;
  }

  for(int i=0; i<10; i++)
  {
    for(int j=i+1; j<10; j++)
    {
      if((result[i]==result[j])&&(result_bool[i]==true))
      {
        count--;
        //1 2 3 4 5

        result_bool[j]=false;
      }
    }
  }
  cout<<count;
  system("pause");
  return 0;

}