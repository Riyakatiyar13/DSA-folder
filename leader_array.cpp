#include <bits/stdc++.h>
#include<math.h>
using namespace std;

 vector<int> leaders(int a[], int n){
        int max1 =INT_MIN;
         vector<int> ans;
        for (int i =n-1; i>0 ;i--) {
            if (a[i] >max1) {
                max1 = a[i];
            ans.push_back(a[i]);
            }
        } 
        reverse ( ans.begin() , ans.end());
        return ans;
    }
int main() {
 int n ;
    cin>>n ;
int arr[n];
for (int i = 0; i<n; i++) {
    cin >> arr[i];
}

vector<int> res = leaders(arr, n);
int size = res.size();
for (int i = 0; i<size; i++) {
    cout << res[i] << " ";
}

    return 0;
}