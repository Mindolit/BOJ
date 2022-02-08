#include<iostream>
#include<string>
using namespace std;
int main(){
  string to_str;
  int a,b,c;
  std::cin>>a>>b>>c;
  int result=a*b*c;
  int counter[10]={0,};
  to_str=to_string(result);
  

  int length=to_str.length();
  for (int i=0; i<length; i++)
  {
    counter[(int)to_str[i]-48]++;
  }
  for(int i=0; i<10; i++)
  {
    std::cout<<counter[i]<<'\n';
  }
  system("pause");
  return 0;

}