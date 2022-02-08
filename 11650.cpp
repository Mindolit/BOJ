#include<iostream>
#include<algorithm>
using namespace std;

class ARR{
  public:
    int x;
    int y;
  ARR(){
    this->x=0;
    this->y=0;
  };
  ARR(int x,int y){
    this->x=x;
    this->y=y;
  }
  void print(){
    cout<<x<<" "<<y<<"\n";
  }
  bool operator <(ARR &arr)
  {
    if(this->y!=arr.y)
    return this->y<arr.y;
    else 
    return this->x<arr.x;
  }
};

bool compare(int a, int b){
  return a>b;
}

int main(){
  ARR arr[100001];
  int N;
  // ios_base :: sync_with_stdio(false);
  // cin.tie(NULL);
  // cout.tie(NULL);
  cin>>N;
  for(int i=0; i<N; i++)
  {
    cin>>arr[i].x;
    cin>>arr[i].y;
  }
  
  std::sort(arr,arr+N);
  for(int i=0; i<N; i++)
  {
    arr[i].print();
  }
  
  system("pause");
  return 0;
}