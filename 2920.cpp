#include<iostream>

int main(){
  int c[8];
  for (int i=0; i<8; i++)
  {
    std::cin>>c[i];
  }
  bool ascending=true;
  bool decending=true;
  
  for(int i=0; i<7; i++)
  {
    if (c[i]!=c[i+1]-1)
    {
      ascending=false;
    }
    if (c[i]-1!=c[i+1])
    {
      decending=false;
    }
  }
  if(ascending==false&&decending==false)
  {
    std::cout<<"mixed";
  }
  else if (ascending==true)
  {
    std::cout<<"ascending";
  }
  else{
    std::cout<<"descending";
  }
  system("pause");
  
  return 0;
  }



