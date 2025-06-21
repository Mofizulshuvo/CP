
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, a;
    cin >> n;
    cin >> a;
    vector<int> m(n);
    for (i = 0; i < n; i++)
        cin >> m(i);
    sort(m.begin(), m.end());
    while (a--)
    {
        int b;
        cin >> b;
        auto p = lower_bound(m.begin(), m.end(), b) - m.begin();
)
if(p< n && m[p]== b)
cout<< b<<"found at"<<p;
else cout << b << "is not found";
    }
}