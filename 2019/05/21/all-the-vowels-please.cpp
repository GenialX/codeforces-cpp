/**
 * All the Vowels Please.
 * http://codeforces.com/contest/1166/problem/B
 *
 * Time complexity: O(n)
 * Space complexity: O(n)
 */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin>>n;
    int rmax = 0, cmax = 0;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            if (i >= 5 && n / i >= 5) {
                rmax = i, cmax = n / i;
                break;
            }
        }
    }
    if (rmax == 0 || cmax == 0) {
        cout<<"-1"<<endl;
        return 0;
    }

    string ans = "";
    vector<char> vowels{'a','e','i','o','u'};
    for (int r = 0; r < rmax; ++r) {
        for (int c = 0; c < cmax; ++c) {
            ans.push_back(vowels[(r + c) % 5]);
        }
    }

    cout<<ans<<endl;
    return 0;
}
