#include<iostream> 
using namespace std;
int main() {
    int M, N;
    cin >> M >> N;
    bool* erato = new bool[N+1];
    std::fill_n(erato, N+1, true);
    erato[1] = false;
    int temp_M = 2;
    for (; temp_M <= N; temp_M++) {
        if (erato[temp_M] == true) {
            int sum = temp_M;
            int temp = temp_M;
            while (true) {
                temp = temp + sum;
                if (temp > N)
                {
                    break;
                }
                erato[temp] = false;
            }
        }
    }
    for (; M <= N+1; M++) {
        if (erato[M] == true) {
            cout << M << "\n";
        }
    }

    system("pause");
    delete[] erato;
    return 0;
}