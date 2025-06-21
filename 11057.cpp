#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++)
        cin >> prices[i];
    cin >> sum;
    sort(prices.begin(), prices.end());
    for (int i = 0; i < n; i++)
    {
        int needed = sum - prices[i];
        if (binary_search(prices.begin(), prices.end(), needed))
        {
            cout << prices[i] << " " << needed << endl;
            break;
        }
    }
    return 0;
}