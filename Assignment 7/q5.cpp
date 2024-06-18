#include <iostream>
using namespace std;

int distinctinteger(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        int flag = true;
        for (int j = 0; j < n; j++)
        {
            if (i == arr[j])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            return i;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter Elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << distinctinteger(arr, n);

    return 0;
}