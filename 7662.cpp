#include<bits/stdc++.h>
using namespace std;


class Dual_priority_queue{

int count=0;
map<int,int> dq;
public:
	void push(int x){
		if(dq.find(x)!=dq.end())
		{
			auto itr=dq.find(x);
			itr->second++;
		}
		else
		{
			dq.insert({x,1});
		}
	}

	void pop(int x){
		if(dq.size()!=0)
		{
			if(x==1)
			{
				auto max=--dq.end();
				auto itr=dq.find(max->first);
				if(itr!=dq.end())
				{
					itr->second-=1;
					if(itr->second==0)
					{
						dq.erase(itr);
					}
				}
			}
			else
			{
				auto min=dq.begin();
				auto itr=dq.find(min->first);
				if(itr!=dq.end())
				{
					itr->second-=1;
					if(itr->second==0)
					{
						dq.erase(itr);
					}
				}
			}
		}

	}
	
	void print(){
		if(dq.size()!=0)
		{
			auto min=dq.begin();
			auto max=--dq.end();
			cout<<max->first<<" "<<min->first<<'\n';
		}
		else 
		{
			cout<<"EMPTY"<<'\n';
		}
	}


};		


int main(){
	  //	ios_base::sync_with_stdio(false);
		//cin.tie(NULL);
    int TestCase;
    cin>>TestCase;
		for(int i=0; i<TestCase; i++)
		{
			Dual_priority_queue dq;
			int loop_count;
			cin>>loop_count;
			for(int i=0; i<loop_count; i++)
			{
				char a; int num;
				cin>>a>>num;
				if(a=='I')
				{
					dq.push(num);
				}
				else if(a=='D')
				{
					dq.pop(num);
				}
			}
			dq.print();
	}
	system("pause");

}