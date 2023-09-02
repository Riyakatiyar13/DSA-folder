
#include <bits/stdc++.h>
using namespace std;
 void toDecimal (int N) {
    int num,  ans = 0, i =0;
    while (N!=0) {
        num = N % 10;
        ans = (num * (pow (2 ,i)) + ans);
        N = N/10;
        i++;
    }
    cout << ans;
 }
int main() {
   int N;
   cin >> N;
   toDecimal (N);
    return 0;
}
