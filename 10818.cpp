#include<iostream>

int main(){
  int N,tmp;
  int max,min;

  std::cin>>N;
  std::cin>>tmp;
  max=tmp;
  min=tmp;
  for(int i=1; i<N; i++)
  {
    std::cin>>tmp;
    if (tmp>max)
    {
      max=tmp;
    }
    if(tmp<min)
    {
      min=tmp;
    }
  }
  std::cout<<min<<" "<<max;
  system("pause");
  return 0;
}