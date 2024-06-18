#include <iostream>
using namespace std;

int distinctcenter(int arr[], int n)
{
    bool left, right;
    for (int i = 1; i < n - 1; i++)
    {
        left = true, right = true;
        for (int j = 0; j < n; j++)

        {
            if (j < i)
            {
                if (arr[j] > arr[i])
                {
                    left = false;
                    break;
                }
            }
            else if (j > i)
            {
                if (arr[j] < arr[i])
                {
                    right = false;
                    break;
                }
            }
        }
        if ((left == true) && (right == true))
        {
            return arr[i];
        }
    }
    return -1;
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
    cout << distinctcenter(arr, n);
    return 0;
}