#include<bits/stdc++.h>
using namespace std;

bool matrix[51][51];
bool adj[51][51][51][51];
int solo = 0;
bool visited[51][51] = { 0, };
void bfs();

int M, N, K;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        memset(matrix, 0, sizeof(matrix));
        memset(adj, 0, sizeof(adj));
        memset(visited, 0, sizeof(visited));

        cin >> M >> N >> K;
        for (int k = 0; k < K; k++)
        {
            int a, b;
            cin >> a >> b;
            matrix[a][b] = 1;
        }
        // adj matrix start
        for (int j = 0; j < M; j++) //row 
        {
            for (int l = 0; l < N; l++) //col
            {

                if (matrix[j][l] == 1)
                {
                    bool is_solo = true;
                    //상
                    if (j - 1 != -1)
                    {
                        if (matrix[j - 1][l] == 1)
                        {
                            adj[j][l][j - 1][l] = 1;
                            is_solo = false;
                        }
                    }
                    //하
                    if (j + 1 != M)
                    {
                        if (matrix[j + 1][l] == 1)
                        {
                            adj[j][l][j + 1][l] = 1;
                            is_solo = false;
                        }
                    }
                    //좌
                    if (l - 1 != -1)
                    {
                        if (matrix[j][l - 1] == 1)
                        {
                            adj[j][l][j][l - 1] = 1;
                            is_solo = false;
                        }
                    }
                    //우
                    if (l + 1 != N)
                    {
                        if (matrix[j][l + 1] == 1)
                        {
                            adj[j][l][j][l + 1] = 1;
                            is_solo = false;
                        }
                    }
                    if (is_solo == true)
                    {
                        solo++;
                        visited[j][l] = 1;
                    }
                }
            }
        }
        //adj matrix end
        bfs();
        solo = 0;
    }
    
}

void bfs() {
    queue<pair<int, int>> visit;
    queue<pair<int, int>> component;
    
    int Conneted_component = 0;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (matrix[i][j] == 1)
            {
                visit.push(make_pair(i, j));
            }
        }
    }

    while (!visit.empty())
    {
        pair<int, int>tmp = visit.front();
        if (visited[tmp.first][tmp.second] == 0)
        {
            visited[tmp.first][tmp.second] = 1;
            Conneted_component++;
            component.push(tmp);
            while (!component.empty())
            {
                tmp = component.front();
                for (int i = 0; i < M; i++)
                {
                    for (int j = 0; j < N; j++)
                    {
                        if (adj[tmp.first][tmp.second][i][j] == 1) //간선이 존재하고
                        {
                            if (visited[i][j] == 0) //방문하지않았다면
                            {
                                visited[i][j] = 1;//방문처리하고
                                component.push(make_pair(i, j));
                            }
                        }
                    }
                }
                component.pop();
            }

        }
        visit.pop();
    }



    cout << solo + Conneted_component << '\n';
}



