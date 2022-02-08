#include<iostream>
#include<string>
#include<cmath>
#define M 1234567891
#define PRIME 31  
using namespace std;

int change(char cr)
{
  return int(cr)-int('a')+1;
}

int main(){
  int L;
  long long power=1;
  string str;
  cin>>L>>str;
  unsigned long long sum=0;
  for(int i=0; i<L; i++)
  {
    long long a=change(str[i]);
    sum+=((a*power)%M);
    power=(power*PRIME)%M;
   
  }
  cout<<sum%M;

  system("pause");
}