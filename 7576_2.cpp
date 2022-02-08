#include<bits/stdc++.h>
using namespace std;
unsigned short tomato[1002][1002];
list<pair<int, int>> adjs[1002][1002];
unsigned int visited[1002][1002];
int BFS(int M, int N)
{
    int day = 0;
    queue<pair<int, int>> que;
    queue<pair<int, int>> que_2;
    //1인 좌표값들 전부 queue에다가 넣음 
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (tomato[i][j] == 1)
            {
                que.push(make_pair(i, j));
             //   cout << i << " " << j << endl;
            }
        }
    }

    while (true)
    {
        bool q1 = true;
        bool q2 = true;
        while (true)
        {
            if (que.empty())
            {

                q1 = false;
                if (!que_2.empty())
                {
                    q2 = true;
                    day++;
                }
                break;
            }
            pair<int, int> tmp = que.front();

            if (tomato[tmp.first][tmp.second] == 0)
            {
                visited[tmp.first][tmp.second] = 1;
                tomato[tmp.first][tmp.second] = 1;
            }
            list<pair<int, int>>::iterator itr;

            for (itr = adjs[tmp.first][tmp.second].begin(); itr != adjs[tmp.first][tmp.second].end(); itr++)
            {
                pair<int, int> itr_s = *itr;
                if (tomato[itr_s.first][itr_s.second] == 0&&visited[itr_s.first][itr_s.second]==0)
                {
                    visited[itr_s.first][itr_s.second] = 1;
                    que_2.push(make_pair(itr_s.first, itr_s.second));
                  //  cout << itr_s.first << " " << itr_s.second << endl;
                }
            }
            que.pop();
        }

        while (true)
        {
            if (que_2.empty())
            {

                q2 = false;
                if (!que.empty())
                {
                    q1 = true;
                    day++;
                }
                break;
            }
            pair<int, int> tmp = que_2.front();
            if (tomato[tmp.first][tmp.second] == 0)
            {
                visited[tmp.first][tmp.second] = 1;
                tomato[tmp.first][tmp.second] = 1;
            }
            list<pair<int, int>>::iterator itr;

            for (itr = adjs[tmp.first][tmp.second].begin(); itr != adjs[tmp.first][tmp.second].end(); itr++)
            {
                pair<int, int> itr_s = *itr;
                if (tomato[itr_s.first][itr_s.second] == 0&&visited[itr_s.first][itr_s.second]==0)
                {
                    visited[itr_s.first][itr_s.second]=1;
                    que.push(make_pair(itr_s.first, itr_s.second));
                 //   cout << itr_s.first << " " << itr_s.second << endl;
                }
            }
            que_2.pop();
        }
        if (q1 == false && q2 == false)
        {
            break;
        }
    }
    return day;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int M, N;
    cin >> M >> N;


    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> tomato[i][j];
        }
    }
    //입력받고
    //그래프 구현,,


    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (tomato[i][j] != -1)
            {
                if (j + 1 != M) //right
                {
                    if (tomato[i][j + 1] != -1)
                       { adjs[i][j].push_back(make_pair(i, j + 1));}
                }
                if (j - 1 != -1)//left
                {
                    if (tomato[i][j - 1] != -1)
                       { adjs[i][j].push_back(make_pair(i, j - 1));}
                }
                if (i - 1 != -1)//up
                {
                    if (tomato[i - 1][j] != -1)
                       { adjs[i][j].push_back(make_pair(i - 1, j));}
                }
                if (i + 1 != N)//down
                {
                    if (tomato[i + 1][j] != -1)
                        {adjs[i][j].push_back(make_pair(i + 1, j));}
                }
            }
        }
    }
    //그래프 구현완료

    int solve = BFS(M, N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (tomato[i][j] == 0)
            {
                solve = -1;
            }
        }
    }
    cout << solve << endl;

    system("pause");
}