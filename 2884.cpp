#include<iostream>

int main(){
  int H,M;
  std::cin>>H>>M;
  int time=H*60+M-45;
  if (time<0)
  {
    H=23;
    M=60-45+M;
  }
  else {
    H=time/60;
    M=time%60;
    }
  std::cout<<H<<" "<<M;

  system("pause");

}