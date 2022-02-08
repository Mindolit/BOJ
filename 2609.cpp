#include<iostream>
using namespace std;

int Greatest_Common_divisor(int A, int B){
  
  if (B==0){
    return A;
  }
  else return Greatest_Common_divisor(B,A%B);
}

int Least_Common_Multiple(int a,int b){
  int GCD=Greatest_Common_divisor(a,b);
  int result=0;
  if (GCD!=0)
  {result=(a*b)/GCD;}
  return result;
}

int main(){
  int a,b;
  cin>>a>>b;
  cout<<Greatest_Common_divisor(a,b)<<endl;
  cout<<Least_Common_Multiple(a,b);
  
  return 0;
}