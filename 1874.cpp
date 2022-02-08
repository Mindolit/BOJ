#include<iostream>
#include<stack>
#include<deque>
using namespace std;

class Stack{
  stack<int>st;
  deque<char>dq;
  public:
  int cnt=1;
  Stack(){
   // st.push(0);
  }
  
  void push(){
    st.push(this->cnt);
    cnt++;
    dq.push_back('+');
  }
  void pop(){
    if(st.empty()==false)
    {
    st.pop();
    dq.push_back('-');
    }
    else if(st.empty()==true)
    {
      cout<<"ERROR"<<'\n';
    }
  }
  int top(){
    if (st.empty()==true)
    {
      return -1;
    }
    return st.top();
  }
  bool empty(){
    return st.empty();
  }
  void print(){
    while(dq.empty()==false)
    {
      cout<<dq.front()<<'\n';
      dq.pop_front();
    }
  }
};

int main(){
  Stack st;
  int TestCase=0; bool can_loop=true;
  cin>>TestCase;
  int *arr=new int[TestCase];
  for(int i=0; i<TestCase; i++)
  {
    cin>>arr[i];
  }

  for(int i=0; i<TestCase; i++)
  {
    if (st.top()==arr[i])
    {
      st.pop();
    }
    else if (st.top()<arr[i])
    {
      while(true)
      {
        st.push();
        if (st.top()==arr[i])
        {
          break;
        }
      }
      i--;
    }
    else if(st.top()>arr[i])
    {
      while(true)
      {
        if(st.top()!=arr[i])
        {
          cout<<"NO"<<'\n';
          can_loop=false;
          break;
        }
      }
      
    }
    if(can_loop==false)
    {
      break;
    }
  }
  if(can_loop!=false)
  {
    st.print();
  }
  delete[] arr;
  system("pause");
}