#include<bits/stdc++.h>
using namespace std;

bool is_digit(string tmp)
{
    for (int i=0; i<=tmp.size(); i++)
    {
        if ('0'<= tmp[i] && tmp[i]<='9')
        {
            return true;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    map<string, int> diction;
    int N, M;
    cin >> N >> M;
    //N개의 포켓몬 입력시작
    for (int i = 1; i <= N; i++)
    {
        string tmp;
        cin >> tmp;
        diction.insert({ tmp,i });
    }
    //N개의 포켓몬 입력 종료

    //M개의 맞춰야하는 문제 시작
    for (int i = 1; i <= M; i++)
    {
        string tmp;
        cin >> tmp;
        if (is_digit(tmp))
        {
            int b = stoi(tmp);
            if (1 <= b <= N) //value로 key를 확인
            {
                for (auto itr = diction.begin(); itr != diction.end(); itr++)
                {
                    if (itr->second == stoi(tmp))
                    {
                        cout << itr->first << '\n';
                        break;
                    }
                }

            }
        }
        else //key로 value를 확인해야함 
        {
            
            cout << diction[tmp] << '\n';
        }
    }
    //M개의 맞춰야하는 문제 끝


}