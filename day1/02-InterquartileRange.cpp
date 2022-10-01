#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int val[size], freq[size], count = 0, z = 0;
    float result[3];
    for (int i = 0; i < size; i++)
    {
        cin >> val[i];
    }
    for (int i = 0; i < size; i++)
    {
        cin >> freq[i];
        count += freq[i];
    }
    int arr[count];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < freq[i]; j++)
        {
            arr[z] = val[i];
            z += 1;
        }
    }
    sort(arr, arr + z);
    size = z;
    int hf = size / 2;
    if (size % 2 == 0)
        if (hf % 2 != 0)
        {
            result[0] = (arr[hf / 2]) / 1.0;
            result[2] = (arr[(size * 3) / 4]) / 1.0;
        }
        else
        {
            result[0] = (arr[hf / 2] + arr[(hf / 2) - 1]) / 2.0;
            result[2] = (arr[(size * 3) / 4] + arr[((size * 3) / 4) - 1]) / 2.0;
        }
    else
    {

        if (hf % 2 != 0)
        {
            result[0] = (arr[hf / 2]) / 1.0;
            result[2] = (arr[(size * 3) / 4]) / 1.0;
        }
        else
        {
            result[0] = (arr[hf / 2] + arr[(hf / 2) - 1]) / 2.0;
            result[2] = (arr[(size * 3) / 4] + arr[((size * 3) / 4) + 1]) / 2.0;
        }
    }
    cout << setprecision(1) << fixed << result[2] - result[0] << endl;
    return 0;
}
