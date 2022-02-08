#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
    // cin.tie(NULL);
    // ios_base::sync_with_stdio(false);
    int T;
    cin >> T;
    int* arr = new int[T];
    int* fre = new int[T];
    int sum = 0;
    
    for (int i = 0; i < T; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + T);
    fill_n(fre, T, 0);

    //최빈값 찾기 시작
    int mini[8002];
    fill_n(mini,8002,0);
    for(int i=0; i<T; i++)
    {
      mini[arr[i]+4000]++;
    }
    int same=0;
    int max=-1;
    for(int i=0; i<8002; i++)
    {
      if(mini[i]>max){
        max=mini[i];
      }
    }
    int minis=0;
    for(int i=0;i<8002; i++)
    {

      if((mini[i]==max))
      {
        minis=i-4000;
        same++;
        if(same==2)
        {
          break;
        }

      } 


    }
    //최빈값 찾기 끝

    sum = floor((sum /double (T))+0.5);
    double mid = arr[(T - 1) / 2];


    
    std::cout << sum << '\n';//산술평균
    std::cout << mid << '\n';//중앙값
    std::cout << minis<< '\n';//최빈값
    std::cout << arr[T - 1] - arr[0] << '\n';//범위

    delete[] arr;
    delete[] fre;
    system("pause");
}