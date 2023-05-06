#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr, int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
                ////aikane only variable declare ba use korci tie O(1) hbe space complexity
            }
        }
        swap(arr[i], arr[minIndex]);
    }
   /* for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;*/
}

/*int main()
{
    int t, s, x;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> s;
        vector<int> arr;
        for(int j = 0; j < s; j++)
        {
            cin >> x;
            arr.push_back(x);
        }
        selectionSort(arr, s);
    }
    return 0;
}*/
