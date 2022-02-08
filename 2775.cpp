#include<iostream>
using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    int Testcase, k, n;
    cin >> Testcase;
    for (int t = 0; t < Testcase; t++)
    {
        cin >> k >> n;
        int** arr = new int* [k + 5];
        for (int i = 0; i < k + 1; i++)
        {
            arr[i] = new int[n + 5];
            fill_n(arr[i], n + 1, 0);
        }

        //0층 i호에 대한 초기화
        for (int i = 1; i <= n; i++)
        {
            arr[0][i] = i;
        }
        //1층부터 i호에 대한 초기회
        for (int i = 1; i <= k; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                for (int l = 1; l <= j; l++)
                {
                    arr[i][j] += arr[i - 1][l];
                }
            }
        }
        cout << arr[k][n] << '\n';
        for (int i = 0; i < k; ++i)
        {
            delete[] arr[i];
        }
        delete[] arr;
    }
    system("pause");
}