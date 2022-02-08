#include<iostream>
#include<string>
using namespace std;

void check(string &T);


int main(){
  
  for(;;)
  {
    string T;
    cin>>T;
    if(T[0]=='0'&&T.size()==1)
    {break;}
    check(T);
  }

  system("pause");
  return 0;
}


void check(string &T)
{
  string tmp;
  tmp=T;
  bool is_equal=true;
  for (int i=0; i<T.size(); i++)
  {
    tmp[i]=T[T.size()-i-1];
  }

  for(int i=0; i<T.size(); i++)
  {
    if(T.size()==1)
    {
      
      is_equal=true;
      break;
    }
    else if(tmp[i]!=T[i])
    {
      cout<<"no"<<'\n';
      is_equal=false;
      break;
    }
  }

  if (is_equal==true)
  {
    cout<<"yes"<<'\n';
  }

}