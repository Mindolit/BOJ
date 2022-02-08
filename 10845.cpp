#include<iostream>
#include<cstring>
using namespace std;

class Queue{
  int qu[10001];
  int back_pointer=0;
  int front_pointer=0;
public:
  Queue(){
    fill_n(qu,10001,-1);
  }
  void push(int x){
    qu[back_pointer]=x;
    back_pointer++;
  }
  void front(){
    if(qu[front_pointer]==-1)
    {
      cout<<"-1"<<'\n';
    }
    else cout<<qu[front_pointer]<<'\n';
    
  }
  void back(){
    if (back_pointer-1==-1)
    { cout<<"-1"<<'\n';}
    else if(qu[back_pointer-1]==-1)
    {
      cout<<"-1"<<'\n';
    }
    else{
      cout<<qu[back_pointer-1]<<'\n';
    }
  }
  void size(){
    cout<<back_pointer-front_pointer<<'\n';
  }
  void empty(){
   if(back_pointer-front_pointer==0)
   {
     cout<<"1"<<'\n';
   }
   else{
     cout<<"0"<<'\n';
   }
  }
  void pop(){
    if(qu[front_pointer]==-1)
    {
      cout<<"-1"<<'\n';
    }
    else {
      cout<<qu[front_pointer]<<'\n';
      qu[front_pointer]=-1;
      front_pointer++;
    }
  }
};


int main(){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  Queue q;
  int Testcase;
  cin>>Testcase;
  for(int i=0; i<Testcase; i++)
  {
    char cmd[6];
    
    int x;
    cin>>cmd;
    if(strcmp(cmd,"pop")==0)
    {q.pop();}
    else if(strcmp(cmd,"push")==0)
    {cin>>x;
      q.push(x);}
    else if(strcmp(cmd,"size")==0)
    {q.size();}
    else if(strcmp(cmd,"front")==0)
    {q.front();}
    else if(strcmp(cmd,"back")==0)
    {q.back();}
    else if(strcmp(cmd,"empty")==0)
    {q.empty();}
  }
  system("pause");
}