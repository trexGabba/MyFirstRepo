#include <iostream>
using namespace std;

int main()
{
    int i, j, n, flag, arr[100];
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
    //Sort Algo
    flag = 0;
    for (i = 0; i < n - 1; i++)
    {
        cout << "\nPass " << i + 1 << ": \n";

        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
            for (int k = 0; k < n; k++)
            {
                cout << arr[k] << " ";
            }
            cout << "\n";
        }
        if (flag == 0)
        {
            break;
        }
    }
    cout << "\nAfter sorting: \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
//TC-> o(n^2)
