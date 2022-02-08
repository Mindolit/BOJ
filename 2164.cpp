#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> q;
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        q.push(i);
    }
    if(q.size()!=1)
    {
        while(true)
        {
            q.pop();//카드 한장 버리고
            int tmp=q.front();//위에 카드를 아래로 넣고
            q.pop();
            q.push(tmp);
            if(q.size()==1)
            {
                break;
            }
        }
        cout<<q.front()<<endl;
    }
    else{
        cout<<'1'<<endl;
    }
    
    system("pause");
    return 0;
}