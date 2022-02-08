#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<tuple>
#include<utility>
using namespace std;

bool compare(tuple<int,string,int> a,tuple<int,string,int> b)
{
  if(get<0>(a)==get<0>(b))
  {
    return get<2>(a)<get<2>(b);
  }
  return get<0>(a)<get<0>(b);
} 

int main(){
  int Testcase=0;
  int age=0;
  string name;
  cin>>Testcase;
  vector<tuple<int,string,int>> v;
  for(int i=0; i<Testcase; i++)
  {
    cin>>age;
    cin>>name;
    v.push_back(make_tuple(age,name,i));
  }
  sort(v.begin(),v.end(),compare);
  for(int i=0; i<Testcase; i++)
  {
    cout<<get<0>(v[i])<<" "<<get<1>(v[i])<<'\n';
  }
  system("pause");
}
