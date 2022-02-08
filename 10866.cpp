#include<iostream>
#include<string>
#define endl '\n'
using namespace std;

class Deque{
  int *array;
  int front=0;
  int rear=0;
  int size=0;
  int default_value=10;
public:
  Deque(){array=new int[default_value];}
  Deque(int N){
    array=new int[N+1];
    fill_n(array,N+1,-10);
  }
  ~Deque()
  {
    delete[] array;
  }
  void push_front(int x){
    
    
    for(int i=rear; i>=front; i--)
    {
      array[i]=array[i-1];

    }
    array[front]=x;
    rear++;
    size++;
  }
  void push_back(int x)
  {
    array[rear]=x;
    rear++;
    size++;
  }

  void pop_front(){
    if(size==0)
    {
      cout<<"-1"<<endl;
    }
    else
    {
      cout<<array[front]<<endl;
      front++;
      size--;
    }
  }

  void pop_back(){
    if(size==0)
    {
      cout<<"-1"<<endl;
    }
    else
    {
      cout<<array[rear-1]<<endl;
      rear--;
      size--;
    }
  }
  void sizes(){
    cout<<this->size<<endl;
  }

  void empty(){
    if(size==0)
    {
      cout<<"1"<<endl;
    }
    else 
    {
      cout<<"0"<<endl;
    }
  }

  void back()
  {
    if(size!=0)
    {
    cout<<array[rear-1]<<endl;
    }
    else
    {
      cout<<"-1"<<endl;
    }
  }

  void fronts()
  {
    if(size!=0)
    {
      cout<<array[front]<<endl;
    }
    else
    {
      cout<<"-1"<<endl;
    }
  }
};



int main(){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int test;
  cin>>test;
  Deque dq(test);
  string tmp;
  int x;
  for(int i=0; i<test; i++)
  {
    cin>>tmp;
    if(tmp=="push_back")
    {
      cin>>x;
      dq.push_back(x);
    }
    else if(tmp=="push_front")
    {
      cin>>x;
      dq.push_front(x);
    }
    else if(tmp=="pop_front")
    {
      dq.pop_front();
    }
    else if(tmp=="pop_back")
    {
      dq.pop_back();
    }
    else if(tmp=="size")
    {
      dq.sizes();
    }
    else if(tmp=="empty")
    {
      dq.empty();
    }
    else if(tmp=="front")
    {
      dq.fronts();
    }
    else if(tmp=="back")
    {
      dq.back();
    }
  }



  system("pause");
}