#include<iostream>
#include<string>

int main(){
  std::string str;
  std::cin>>str;
  int counter[123];
  std::fill_n(counter,123,0);
  //a~z ASCII 97~122
  //A~Z ASCII 65~90
  int loop_count=str.length();
  for(int i=0; i<loop_count;i++)
  {
    int ASCII=(int)str[i];
    if (ASCII>=97){
      ASCII=ASCII-32;
    }
    counter[ASCII]++;  
  }
  int max,second_max;
  bool what=false;
  max=0;
  int index;
  for(int i=65; i<=90; i++)
  {
    if(max==counter[i])
    {
      second_max=counter[i];
    }
    if(max<counter[i])
    {
      max=counter[i];
      
      index=i;
    }
  
  }
  if(second_max==max)
  {
    what=true;
  }
  
  if(what==true)
  {
    std::cout<<"?";
  }
  else{
    std::cout<<char(index);
  }

  system("pause");
  return 0;
}