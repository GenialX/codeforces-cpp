#include <bits/stdc++.h>

using namespace std;

void solve(int t) {
    int n;
    cin >> n;
    vector<int> nums, ans;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    sort(nums.begin(), nums.end());
    int i = 0, j = n - 1, base = 0;
    while (i <= j) {
        if (i == j) {ans.push_back(nums[i]); ++i;--j;}
        else if (base == 0) {
            ans.push_back(nums[j--]);
        } else {
            ans.push_back(nums[i++]);
        }
        base = (base + 1) % 2;
    }

    for (int i = n - 1; i >= 0; --i) {
        cout << ans[i] << " ";
    }

    cout << endl;
}
int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve(i);
    }
    return 0;
}
