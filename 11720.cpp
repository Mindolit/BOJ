#include<iostream>
#include<string>
using namespace std;

int main(){
  int N,sum=0;
  std::string str;
  std::cin>>N;
  std::cin>>str;
  

  for (int i=0; i<N; i++)
  {
    sum=(int)str[i]-48+sum;
  }
  std::cout<<sum;
  system("pause");
  return 0;
}