#include<iostream>
using namespace std;
int GCD(int a, int b);

void LCM(int a,int b){
  int gcd=GCD(a,b);
  cout<<a*b/gcd<<endl;
}

int GCD(int a, int b){
  return b==0?a:GCD(b,a%b);
}

int main(){
  int TestCase,a,b;
  cin>>TestCase;
  for(int i=0; i<TestCase; i++){
    cin>>a>>b;
    LCM(a,b);
  }
}
