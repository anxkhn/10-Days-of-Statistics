#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[t];
    int tot = 0, max = 0, check;
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
        tot = tot + arr[i];
    }
    cout << fixed << setprecision(1) << (float)tot / t << endl;
    sort(arr, arr + t);
    float median;
    if (t % 2 == 0)
    {
        median = ((arr[(t / 2) - 1]) + (arr[(t / 2)])) / 2.0;
    }
    else
        median = arr[t / 2];
    cout << fixed << setprecision(1) << median << endl;
    int count[t];
    for (int i = 0; i < t; i++)
    {
        count[i] = 0;
        check = arr[i];
        for (int j = i; j < t; j++)
        {
            if (arr[j] == check)
            {
                count[i] += 1;
            }
        }
        if (i > 0 && count[i] > count[max])
        {
            max = i;
        }
    }
    cout << arr[max] << endl;
}
