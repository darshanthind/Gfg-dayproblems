#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int a2[] = {1, 2, 4, 5, 6};

    int n = sizeof(a) / sizeof(a[0]);

    int i = 0;
    int e = n - 1;

    while (i < e)
    {
        int mid = i + (e - i) / 2;
        if (a[mid] == a2[mid])
        {
            i = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    cout << i << "\n";
}