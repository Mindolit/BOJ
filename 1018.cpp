#include<iostream>
using namespace std;


int main() {
int N, M; //COL M; ROW N;
cin >> N >> M;
int b_min = 0;
int w_min = 0;
int B_min[2000];
int W_min[2000];
fill_n(B_min, 2000, 1000);
fill_n(W_min, 2000, 1000);
char** array = new char* [N];
for (int i = 0; i < N; i++)
{
    array[i] = new char[M + 1];
}

for (int i = 0; i < N; i++)
{
    cin >> array[i];
}
int idx_ptr = 0;
bool w_rigth = true;
bool b_rigth = true;

for (int row = 0; row <= N - 8; row++)
{
    for (int col = 0; col <= M - 8; col++)
    {
        //여기서부터는 비교시작
        for (int i = row; i < row + 8; i++)
        {
            for (int j = col; j < col + 8; j++)
            {
                if (w_rigth == true && array[i][j] == 'W')
                {
                    ;
                }
                else if (w_rigth == false && array[i][j] == 'B')
                {
                    ;
                }
                else
                {
                    w_min++;
                }

                if (b_rigth == true && array[i][j] == 'B')
                {
                    ;
                }
                else if (b_rigth == false && array[i][j] == 'W')
                {
                    ;
                }
                else
                {
                    b_min++;
                }
                w_rigth = !w_rigth;
                b_rigth = !b_rigth;
            }
            w_rigth = !w_rigth;
            b_rigth = !b_rigth;
        }
        B_min[idx_ptr] = b_min;
        W_min[idx_ptr] = w_min;
        b_min = 0;
        w_min = 0;
        idx_ptr++;
    }
}

int min = 10000;
int min_2 = 10000;
for (int i = 0; i < 2000; i++)
{
    if (B_min[i] < min)
    {
        min = B_min[i];
    }
    if (W_min[i] < min_2)
    {
        min_2 = W_min[i];
    }
}
min > min_2 ? cout << min_2 : cout << min;

for (int i = 0; i < N; i++)
{
    delete[] array[i];
}
delete []array;
return 0;

}


