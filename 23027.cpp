#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  string a="A";
  string B="B";
  string C="C";
  std::getline(cin,s);
  if(s.find("A")!=string::npos)
  {
    for(int i=0; i<s.size(); i++)
    { 
      if(s.find("B")!=string::npos)
      s.replace(s.find('B'),a.size(),a);
      if(s.find("C")!=string::npos)
      s.replace(s.find("C"),a.size(),a);
      if(s.find("D")!=string::npos)
      s.replace(s.find("D"),a.size(),a);
      if(s.find("F")!=string::npos)
      s.replace(s.find("F"),a.size(),a);
    }
  }
  else if(s.find("B")!=string::npos)
  {
    for(int i=0; i<s.size(); i++)
    { 
      if(s.find("D")!=string::npos)
      s.replace(s.find("D"),B.size(),B);
      if(s.find("C")!=string::npos)
      s.replace(s.find("C"),B.size(),B);
      if(s.find("F")!=string::npos)
      s.replace(s.find("F"),B.size(),B);
    }
  }
  else if(s.find("C")!=string::npos)
  {
    for(int i=0; i<s.size(); i++)
    {
      if(s.find("D")!=string::npos)
      s.replace(s.find("D"),C.size(),C);
      if(s.find("F")!=string::npos)
      s.replace(s.find("F"),C.size(),C);
    }
  }
  else 
  {
    string tmp;
    for(int i=0; i<s.size(); i++)
    tmp.append("A");
    s.replace(0,tmp.size(),tmp);
  }

  cout<<s;

  system("pause");
}