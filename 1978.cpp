#include<iostream>
using namespace std;

int check_prime(int *array,int size);

int main(){
  int TestCase,prime_count;
  cin>>TestCase;
  int *N=new int[TestCase];
  for(int i=0; i<TestCase; i++){
    cin>>N[i];
  }
  prime_count=check_prime(N,TestCase);
  cout<<prime_count;
  system("pause");
  delete[] N;
  return 0;
}

int check_prime(int *pointer,int size){
  int check_count=0;
  for(int i=0; i<size; i++){
    int check=pointer[i];
    bool is_prime=check>=2?true:false;
    for (int j=2; j<check; j++)  {
      if (check%j==0)
      {
        is_prime=false;
        break;
      }

    }
    if (is_prime==true){
      check_count++;
    }
  }
  
  return check_count;
}
