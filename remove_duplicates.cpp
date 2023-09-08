#include <iostream>
#include <vector>
using namespace std;

vector<int> remove_duplicates(vector<int> arr) {
    int j = 0;
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        if (arr[j] != arr[i]) {
            j++;
            arr[j] = arr[i];
        }
    }
    // Resize the vector to remove the duplicates
    arr.resize(j + 1);
    return arr;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> res = remove_duplicates(arr);

    int t = res.size();
    for (int i = 0; i < t; i++) {
        cout << res[i] << " ";
    }
    return 0;
}
