#include<iostream>

using namespace std;

class Queue{
  int count=1;
  int size=-1;
  int const_size;
  int *circler_queue;
  public:
    Queue(int N){
      circler_queue=new int[N+1];
      for (int i=1; i<=N; i++)
      {
        circler_queue[i]=i;
      }
      size=N;
      const_size=N;
    }
    ~Queue(){
      delete []circler_queue;
    }
    void Ysps(int K){
      while(true)
      {
        for(int i=1; i<const_size+1; i++)
        {

          
          if(count==K&&circler_queue[i]!=-1)
          {
            if(size!=1)
            {cout<<circler_queue[i]<<", ";}
            else if(size==1)
            {cout<<circler_queue[i]<<">";}
            circler_queue[i]=-1;
            count=1;
            size--;
            continue;
          }
          if(circler_queue[i]!=-1)
          {
            count++;
          }
          
        }
        if(size==0)
        {
          break;
        }
       
      }
    }
};

int main(){
  int N,K;
  cin>>N>>K;
  Queue qu(N);
  cout<<"<";
  qu.Ysps(K);
  
  system("pause");


}