#include <bits/stdc++.h>

using namespace std;

void solve(int t) {
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    int base = 0;
    int ans = 1;
    for (int i = 1; i < n; ++i) {
        if (nums[i] + base >= nums[i - 1]) {
            continue;
        } else {
            while (true) {
                base += pow(2, ans++ - 1);
                if (base + nums[i] >= nums[i - 1]) {
                    break;
                }
            }
        }
        nums[i] += base;
    }
    //cout << "<" <<  ans  << ">" << endl;
    cout << (ans - 1) << endl;

}
int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve(i);
    }
    return 0;
}
