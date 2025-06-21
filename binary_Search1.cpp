#include <bits/stdc++.h>
using namespace std;

void search(int LC[], int N, int target) {
    int left = 0, right = N - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (LC[mid] == target) {
            int l = mid - 1;
            while (l >= 0 && LC[l] == target) 
            l--;
            int r = mid + 1;
            while (r < N && LC[r] == target) 
            r++;

            if (l >= 0) cout << LC[l] << " ";
            else cout << "X ";

            if (r < N) cout << LC[r] << endl;
            else cout << "X" << endl;
            return;
        }
        else if (LC[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    if (right >= 0) cout << LC[right] << " ";
    else cout << "X ";

    if (left < N) cout << LC[left] << endl;
    else cout << "X" << endl;
}

void Query(int LC[], int N, int lucy[], int Q) {
    for (int i = 0; i < Q; i++) 
    {
      int a=lucy[i];
        search(LC, N, a);
    }
}

int main() {
    int N;
    cin >> N;
    int LC[N];
    for (int i = 0; i < N; i++) {
        cin >> LC[i];
    }
    
    int Q;
    cin >> Q;
    int lucy[Q];
    for (int i = 0; i < Q; i++) {
        cin >> lucy[i];
    }

    Query(LC, N, lucy, Q);
    return 0;
}
