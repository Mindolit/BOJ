#include<iostream>
#include<utility>
using namespace std;

int main() {
    int N;
    cin >> N;
    pair<pair<int, int>, int>* p = new pair<pair<int, int>, int>[N];
    int a = 0, b = 0;
    for (int i = 0; i < N; i++)
    {
        p[i].second = 0;
        p[i].first.first = 0;
        p[i].first.second = 0;
    }
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        p[i].first.first = a;
        p[i].first.second = b;
    }
    int rank = 1;
    for (int i = 0; i < N; i++)
    {
        rank = 1;
        for (int j = 0; j < N; j++)
        {
            if (p[i].first.first < p[j].first.first && p[i].first.second < p[j].first.second)
            {
                rank++;
            }
        }
        p[i].second = rank;
    }


    //print
    for (int i = 0; i < N; i++)
    {
        if (i != N - 1)
        {
            cout << p[i].second << " ";
        }
        else
        {
            cout << p[i].second;
        }
    }


    system("pause");
    delete[] p;
}