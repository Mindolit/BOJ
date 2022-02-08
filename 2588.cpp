#include<iostream>
using namespace std;

int main(){
  int first;
  int second[4];
  
  cin>>first;
   for(int i=0; i<3; i++)
  {
    scanf("%1d",&second[i]);
  }
  
  cout<<first*second[2]<<'\n';
  cout<<first*second[1]<<'\n';
  cout<<first*second[0]<<'\n';
  cout<<first*second[2]+first*second[1]*10+first*second[0]*100<<'\n';

}
