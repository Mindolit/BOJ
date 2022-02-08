#include<bits/stdc++.h>
using namespace std;

bool adjs[1001][1001];
stack<int>st;

int DFS(int v) {
  int visited[1001]={0,};
  queue<int>print_q;
  stack<int>st;
  st.push(v);
  visited[v]=1;
  print_q.push(v);
    while (!st.empty()) 
    {
        int node=st.top();
      loop:
        for (int i = 0; i < 1001; i++)
        {
            if (adjs[node][i] == 1)    //간선이 존재 할 때
            {
                if (visited[i] == 0)   //방문하지 않았다면 
                {
                    print_q.push(i);  
                    st.push(i);
                    visited[i] = 1;    //방문처리
                    node=st.top();
                    goto loop;
                }
            }   
        }
        st.pop();
       
        
        
    }

    
    while (!print_q.empty())
    {
        cout << print_q.front() << " ";
        print_q.pop();
    }

  cout<<'\n';
  return 0;
}

int BFS(int v) {
    int visited[1001] = { 0, };
    queue<int>qu;
    queue<int>print_q;
    qu.push(v);
    print_q.push(v);
    visited[v] = 1;
    while (!qu.empty())
    {
        int node = qu.front();
        for (int i = 0; i < 1001; i++)
        {
            if (adjs[node][i] == 1)
            {
                if (visited[i] == 0)
                {
                    print_q.push(i);
                    qu.push(i);
                    visited[i] = 1;
                }
            }
        }
        qu.pop();
    }
    while (!print_q.empty())
    {
        cout << print_q.front() << " ";
        print_q.pop();
    }
    return 0;
}
int main() {
    int N, M, V;
    cin >> N >> M >> V;
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        adjs[a][b] = true;
        adjs[b][a] = true;
    }
    DFS(V);
    BFS(V);
    system("pause");

}