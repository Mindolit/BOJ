#include<iostream>
using namespace std;
#define MAX 1000000
bool erato[MAX+1];

int main() {
    int num = 1;
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
    fill_n(erato,MAX+1,true);
    
    erato[1] = false;
    for (int i = 2; i <MAX; i++) {
        if (erato[i] == true)
        {
            unsigned int j = i;
            int sum = i;
            while (true)
            {
                j = j + sum;
                if (j > 1000001) { break; }
                erato[j] = false;
            }
        }
    }

    while(true){
    
        cin >> num;
        int result = num;
        if (num == 0) { break; }
        //바흐의추측
            int check_value = num;
            int an_array[2] = { 0,0 };
            //제일 큰 값 b를 먼저 찾는 루프
            for (; 2 <= num; num--)
            {
                if (erato[num] == true)
                {
                    int b = num;
                    int a = check_value - b;
                    if ((erato[b] == true) && (erato[a] == true))
                    {
                        an_array[0] = a;
                        an_array[1] = b;
                        break;
                    }
                }
            }

        if (an_array[0] == -1) { cout << "Goldbach's conjecture is wrong." << '\n'; }
        else
        {
            cout<<result<<" = " << an_array[0] << " + " << an_array[1]<<'\n';
   
        }
    }
}