#include <iostream>
using namespace std;

int main()
{
    int a[7] = {4, 8, 6, 9, 5, 2, 7};
    int n = 7, sum = 0;

    for (int i = 0; i < 7; i++)
    {
        sum = sum + a[i];
    }

    cout << "sum is" << sum;

    return 0;

    int A[10], n = 10;
    int key;
    cout << "Enter Numbers";

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "Enter Key";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (key == A[i])
        {
            cout << "Found at" << i;
            return 0;
        }
    }

    cout << "Not Found";

    int A[] = {8, 4, 12, 37, 36, 25, -2, 10, 15, 25};
    int min = A[0];

    for (int x : A)
    {
        if (x < min)
            min = x;
    }

    cout << min;
}

return 0;
}