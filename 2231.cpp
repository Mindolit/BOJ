#include<iostream>
#include<string>
#include<cmath>
#include<ctime>
using namespace std;

int main() {
  time_t start,end;
    start=time(NULL);
    int N;
    cin >> N;
    const int s = N;
    string tmp = to_string(N);
    int* arr = new int[N];
    fill_n(arr, N, 0);
    int sum = 1;
    int loop_sum = 0;
    loop_sum += sum;
    while (N != 0)
    {
        string tmp2 = to_string(sum);
        int loop_size = tmp2.size();
        for (int i = 0; i < loop_size; i++)
        {
            loop_sum += (int)tmp2[i] - '0';
        }
        if (loop_sum == s)
        {
            break;
        }
        N--;
        sum++;
        loop_sum = sum;
    }
    if (N != 0)
    {
        cout << sum ;
    }
    else {
        cout << 0 ;
    }

    delete[] arr;
    end=time(NULL);
    cout<<(double)end-start;
    system("pause");
}