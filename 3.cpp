#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr1 = {10, 15, 20, 25, 30, 35};
    
    vector<int> arr2 = {10, 15, 20, 20, 25, 30, 35};
    
    vector<int> arr3 = {10, 15, 25, 30, 35};
    
    vector<int> arr4 = {5, 10, 15, 16, 17};
    int val = 20;
    cout << " " << lower_bound(arr1.begin(), arr1.end(), val) - arr1.begin();
    cout << " " << lower_bound(arr2.begin(), arr2.end(), val) - arr2.begin();
    cout << " " << lower_bound(arr3.begin(), arr3.end(), val) - arr3.begin();
    cout << " " << lower_bound(arr4.begin(), arr4.end(), val) - arr4.begin();
    cout << endl
         << "upper";
    cout << " " << upper_bound(arr1.begin(), arr1.end(), val) - arr1.begin();
    cout << " " << upper_bound(arr2.begin(), arr2.end(), val) - arr2.begin();
    cout << " " << upper_bound(arr3.begin(), arr3.end(), val) - arr3.begin();
    cout << " " << upper_bound(arr4.begin(), arr4.end(), val) - arr4.begin();
}