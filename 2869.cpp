#include<iostream>
using namespace std;

int main(){
  int A,B,V;
  cin>>A>>B>>V;
  
  cout<<(int)(V-B-1)/(A-B)+1;
  //    V>K(A-B)
  system("pause");
}


