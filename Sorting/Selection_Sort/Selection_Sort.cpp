#include <iostream>
using namespace std;

int main()
{
    int i, j, n, arr[100];
    cout << "Enter how many elements to be sorted: "
         << "\n";
    cin >> n;
    cout << "Enter elements: "
         << "\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nBefore sorting: \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<"\n\n";
    //sort algo
    for (i = 0; i < n - 1; i++)
    {
        int min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp;
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    cout<<"\n";
    }
    cout << "\nAfter sorting: \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}