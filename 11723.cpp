#include<bits/stdc++.h>
using namespace std;

bool S[21] = { 0, };

void add(int a)
{
    S[a] = 1;
}

void remove(int a)
{
    S[a] = 0;
}

void check(int a)
{
    if (S[a] == 1)
    {
        cout << "1" << '\n';
    }
    else
    {
        cout << "0" << '\n';
    }
}

void toggle(int a)
{
    S[a] = !S[a];
}

void all() {
    for (int i = 1; i < 21; i++)
    {
        S[i] = 1;
    }
}
void empty()
{
    for (int i = 1; i < 21; i++)
    {
        S[i] = 0;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string tmp;
    int T, a;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> tmp;
        if (tmp == "add")
        {
            cin >> a;
            add(a);
        }
        else if (tmp == "remove")
        {
            cin >> a;
            remove(a);
        }
        else if (tmp == "check")
        {
            cin >> a;
            check(a);
        }
        else if (tmp == "toggle")
        {
            cin >> a;
            toggle(a);
        }
        else if (tmp == "all")
        {
            all();
        }
        else//empty
        {
            empty();
        }
    }

}