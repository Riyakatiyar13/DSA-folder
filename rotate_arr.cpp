#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void reverse(vector<int> &arr, int start, int end) {
    while (start < end) {
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}

void rotateLeft(vector<int> &arr, int k) {
    int n = arr.size();
    k = k % n; // Handle cases where k is larger than n
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, n - 1);
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rotateLeft(arr, k);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
