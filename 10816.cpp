
#include<iostream>
#include<algorithm>
using namespace std;
bool is_in(int* array, int key, int left, int right)
{
    int mid, count = 0;
    if (left > right)
    {
        return 0;
    }
    mid = (left + right) / 2;
    if (array[mid] > key)
    {
        return is_in(array, key, left, mid - 1);
    }
    else if (array[mid] < key)
    {
        return is_in(array, key, mid + 1, right);
    }
    else if (array[mid] == key)
    {
        return 1;
    }
}
int binary_search(int* array, int key, int left, int right)
{
    if (is_in(array, key, left, right) != 1)
        return 0;
    int start = 0, end = right;
    int mid;
    while (start < end) {
        mid = (start + end) / 2;
        if (array[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    int l_bound = end;
    start = 0, end = right;
    while (start < end)
    {
        mid = (start + end) / 2;
        if (array[mid] <= key)
        {
            start = mid + 1;
        }
        else {
            end = mid;
        }
    }
    return end - l_bound;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    int t_num;
    cin >> N;
    int* T_array = new int[N];
    for (int i = 0; i < N; i++)
    {

        cin >> t_num;
        T_array[i] = t_num;
    }
    sort(T_array, T_array + N);
    int check_case;
    cin >> check_case;
    for (int i = 0; i < check_case; i++)
    {
        cin >> t_num;
        cout << binary_search(T_array, t_num, 0, N) << " ";
    }
    delete[] T_array;
    system("pause");
}