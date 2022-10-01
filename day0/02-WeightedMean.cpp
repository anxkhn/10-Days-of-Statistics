#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a[t], b[t], mul[t], count = 0, total = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < t; i++)
    {
        cin >> b[i];
        mul[i] = a[i] * b[i];
        total = total + mul[i];
        count = count + b[i];
    }
    cout << fixed << setprecision(1) << (float)total / count << endl;
}
