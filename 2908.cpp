#include<iostream>
#include<string>
int main(){
  char a[4];
  char tmp;
  char b[4];
  std::cin>>a>>b;
  tmp=a[2];
  a[2]=a[0];
  a[0]=tmp;
  int A=std::stoi(a);
  tmp=b[2];
  b[2]=b[0];
  b[0]=tmp;
  int B=std::stoi(b);
  if(A>B){
    std::cout<<A;
  }
  else{
    std::cout<<B;
  }
  system("pause");
  return 0;
}

