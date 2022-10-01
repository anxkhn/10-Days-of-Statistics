#include <bits/stdc++.h>
using namespace std;

// int median(int arr, int start, int end)
// {
//     int med = (end - start);
//     if (med % 2 == 0)
//     {
//         return (arr[med / 2]);
//     }
//     else
//     {
//         return ((arr[med / 2] + arr[(med / 2) + 1]) / 2);
//     }
// }

int main()
{
    int size;
    cin >> size;
    int hf = size / 2;
    int arr[size], result[3];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + size);
    if (size % 2 == 0)
        if (hf % 2 != 0)
        {
            result[0] = (arr[hf / 2]);
            result[1] = (arr[hf] + arr[hf - 1]) / 2;
            result[2] = (arr[(size * 3) / 4]);
        }
        else
        {
            result[0] = (arr[hf / 2] + arr[(hf / 2) - 1]) / 2;
            result[1] = (arr[hf] + arr[hf - 1]) / 2;
            result[2] = (arr[(size * 3) / 4] + arr[((size * 3) / 4) - 1]) / 2;
        }
    else
    {

        if (hf % 2 != 0)
        {
            result[0] = (arr[hf / 2]);
            result[1] = (arr[hf]);
            result[2] = (arr[(size * 3) / 4]);
        }
        else
        {
            result[0] = (arr[hf / 2] + arr[(hf / 2) - 1]) / 2;
            result[1] = (arr[hf]);
            result[2] = (arr[(size * 3) / 4] + arr[((size * 3) / 4) + 1]) / 2;
        }
    }
    cout << result[0] << endl
         << result[1] << endl
         << result[2] << endl;
    return 0;
}
