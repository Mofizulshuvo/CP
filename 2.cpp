#include <iostream>
using namespace std;
int bis(int arr[], int l, int r, int a)
{
    int f = 0, b, m;
    while (l <= r)
    {
        m = (l + r) / 2;
        if (arr[m] == a)
        {
            f = 1;
            b = m;
            break;
        }
        if (arr[m] < a)
            l = m + 1;
        if (arr[m] > a)
            r = m - 1;
    }
    if (f == 1)
        return b;
    else
        return 0;
}
int main()
{
    int i, n;
    cin >> n;
    int arr[n+1];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    int a;
    cin >> a;
    int bs = bis(arr, 0, n - 1, a);
    if (bs == 0)
        cout << "notfound";
    else
        cout << " found at " << bs + 1;
}
