#include<iostream>

int main(){
  int TestCase,n;
  int n_array[11];
  n_array[1]=1;
  n_array[2]=2;
  n_array[3]=4;
  std::cin>>TestCase;
  for(int i=0; i<TestCase; i++)
  {
    std::cin>>n;
    for (int j=4; j<=n; j++){
      n_array[j]=n_array[j-1]+n_array[j-2]+n_array[j-3];
    }
    std::cout<<n_array[n]<<'\n';
  }
  system("pause");
}