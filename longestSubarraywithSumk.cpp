
#include <bits/stdc++.h>

using namespace std;

int longestSubarrayWithSumk(int *arr, int n, int k) {
    int left = 0, right = 0;
    int sum = 0; // Initialize sum to 0
    int maxLen = 0;
    
    while (right < n) {
        while (left <= right && sum > k) {
            sum -= arr[left];
            left++;
        }
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < n) {
            sum += arr[right];
        }
    }

    return maxLen;
}

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int res = longestSubarrayWithSumk(arr, n, k);

    cout << res << " ";

    return 0;
}
