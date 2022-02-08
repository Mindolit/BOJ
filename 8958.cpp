#include<iostream>
#include<string>
using std::cin; using std::cout; using std::string;
int main()
{
  int TestCase;
  cin>>TestCase;
  string a;
  for(int i=0; i<TestCase; i++)
  {
    cin>>a;
    int count=0,score=0;
    for(int j=0;j<a.length(); j++){
      if(a[j]=='O')
      {
        count++;
        score=score+count;
      }
      else{
        count=0;
      }
    }
    cout<<score<<'\n';

  }
  system("pause");
  return 0;
}