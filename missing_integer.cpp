#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<int> remove_duplicates (vector<int>arr, int n) {
 vector<int> ans;
 unordered_map <int,int> mpp;
 for (int i =0; i<n; i++) {
  mpp[arr[i]]++;
 }
 for (auto it: mpp) {
  ans.push_back (it.first);
 }
 return ans;
}

vector<int> missing_integer(vector<int> arr, int n) {
    vector<int> temp;
    vector<int> res = remove_duplicates(arr, n);
    int t = res.size();
    sort(res.begin(), res.end());

    for (int i = 0; i < t - 1; i++) {
        if (res[i] != res[i + 1] - 1) {
            temp.push_back(res[i] + 1); // Add the missing element directly to temp
        }
    }
    return temp;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> res = missing_integer(arr , n);

    int t = res.size();
    for (int i = 0; i < t; i++) {
        cout << res[i] << " ";
    }
    return 0;
}