#include<bits/stdc++.h>
using namespace std;
short tomato[103][103][103];
list<tuple<short,short, short>> adjs[103][103][103];
short visited[103][103][103];
int BFS(short M, short N,short H)
{
    int day = 0;
    queue<tuple<short,short,short>> que;
    queue<tuple<short,short,short>> que_2;
    //1인 좌표값들 전부 queue에다가 넣음 
    for(short h=0; h<H; h++){
    for (short i = 0; i < N; i++)
    {
        for (short j = 0; j < M; j++)
        {
            if (tomato[i][j][h] == 1)
            {
                que.push(make_tuple(i,j,h));
            }
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
            tuple<short,short, short> tmp = que.front();

            if (tomato[get<0>(tmp)][get<1>(tmp)][get<2>(tmp)] == 0)
            {
                visited[get<0>(tmp)][get<1>(tmp)][get<2>(tmp)] = 1;
                tomato[get<0>(tmp)][get<1>(tmp)][get<2>(tmp)]= 1;
            }
            list<tuple<short,short, short>>::iterator itr;

            for (itr = adjs[get<0>(tmp)][get<1>(tmp)][get<2>(tmp)].begin(); itr != adjs[get<0>(tmp)][get<1>(tmp)][get<2>(tmp)].end(); itr++)
            {
                tuple<short,short, short> itr_s = *itr;
                if (tomato[get<0>(itr_s)][get<1>(itr_s)][get<2>(itr_s)] == 0&&visited[get<0>(itr_s)][get<1>(itr_s)][get<2>(itr_s)] ==0)
                {
                    visited[get<0>(itr_s)][get<1>(itr_s)][get<2>(itr_s)]  = 1;
                    que_2.push((make_tuple(get<0>(itr_s),get<1>(itr_s),get<2>(itr_s))));
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
            tuple<short,short, short> tmp = que_2.front();
            if (tomato[get<0>(tmp)][get<1>(tmp)][get<2>(tmp)]== 0)
            {
                visited[get<0>(tmp)][get<1>(tmp)][get<2>(tmp)] = 1;
                tomato[get<0>(tmp)][get<1>(tmp)][get<2>(tmp)] = 1;
            }
            list<tuple<short,short, short>>::iterator itr;

            for (itr = adjs[get<0>(tmp)][get<1>(tmp)][get<2>(tmp)].begin(); itr != adjs[get<0>(tmp)][get<1>(tmp)][get<2>(tmp)].end(); itr++)
            {
                tuple<short,short, short> itr_s = *itr;
                if (tomato[get<0>(itr_s)][get<1>(itr_s)][get<2>(itr_s)] == 0&&visited[get<0>(itr_s)][get<1>(itr_s)][get<2>(itr_s)]==0)
                {
                    visited[get<0>(itr_s)][get<1>(itr_s)][get<2>(itr_s)]=1;
                    que.push(make_tuple(get<0>(itr_s),get<1>(itr_s),get<2>(itr_s)));
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
   // ios_base::sync_with_stdio(false);
   // cin.tie(NULL);
    short M, N,H;
    cin >> M >> N>>H;
    bool all_clear=true;
  for(short h=0; h<H; h++){
    for (short i = 0; i < N; i++)
    {
        for (short j = 0; j < M; j++)
        {
            cin >> tomato[i][j][h];
            if(tomato[i][j][h]!=1&&tomato[i][j][h]!=-1)
            {
              all_clear=false;
            }
        }
    }
  }
  if(all_clear==true)
  {
    std::cout<<"0"<<'\n';
    
    return 0;
  }
    //입력
    
  
  //adj matrix구현 
  for(short h=0; h<H; h++){
    for (short i = 0; i < N; i++)
    {
        for (short j = 0; j < M; j++)
        {
            if (tomato[i][j][h] != -1)
            {
                if (j + 1 != M) //right
                {
                    if (tomato[i][j + 1][h] != -1)
                      { adjs[i][j][h].push_back(make_tuple(i, j + 1,h));}
                }
                if (j - 1 != -1)//left
                {
                    if (tomato[i][j - 1][h] != -1)
                      { adjs[i][j][h].push_back(make_tuple(i, j - 1,h));}
                }
                if (i - 1 != -1)//up
                {
                    if (tomato[i - 1][j][h] != -1)
                      { adjs[i][j][h].push_back(make_tuple(i - 1, j,h));}
                }
                if (i + 1 != N)//down
                {
                    if (tomato[i + 1][j][h] != -1)
                        {adjs[i][j][h].push_back(make_tuple(i + 1, j,h));}
                }
                //3차원 상, 하
                if(h+1 !=H)
                {
                  if(tomato[i][j][h+1]!=-1)
                  {
                    adjs[i][j][h].push_back(make_tuple(i, j ,h+1));
                  }
                }
                if(h-1 !=-1)
                {
                  if(tomato[i][j][h-1]!=-1)
                  {
                    adjs[i][j][h].push_back(make_tuple(i,j,h-1));
                  }
                }
            }
        }
    }
  }
  //adj matrix 끝

    int solve = BFS(M, N,H);
    for(short h=0; h<H; h++)
    {
    for (short i = 0; i < N; i++)
    {
        for (short j = 0; j < M; j++)
        {
            if (tomato[i][j][h] == 0)
            {
                solve = -1;
            }
        }
    }
    }
    cout << solve << endl;

    system("pause");
}