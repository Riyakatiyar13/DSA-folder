#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int second_largest_element(int *arr, int n) {
  int largest = INT_MIN;
  int second_largest = INT_MIN;
  for (int i =0; i<n; i++) {

 if (arr [i] > largest) {
    second_largest = largest;
    largest = arr[i];
 }
 else if ( arr [i] > second_largest && arr[i] != largest) {
    second_largest = arr[i];
 }
  }
 return second_largest;
}
int main () {

    int n ;
    cin>>n;
int arr[n];
for (int i = 0; i<n; i++) {
    cin >> arr[i];
}

int res = second_largest_element(arr, n );
    cout << res <<endl ;
    return 0;
}