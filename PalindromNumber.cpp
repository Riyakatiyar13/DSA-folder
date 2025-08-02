#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0)
        return false; // negative numbers can't be palindrome

    int initialAns = x;
    int ans = 0;

    while (x != 0)
    {
        int lastDigit = x % 10;

        // overflow check
        if (ans > INT_MAX / 10)
            return false;

        ans = ans * 10 + lastDigit;
        x /= 10;
    }

    return initialAns == ans;
}

int main()
{
    int n;
    cin >> n;

    bool res = isPalindrome(n);
    cout << (res ? "true" : "false") << endl;
}
