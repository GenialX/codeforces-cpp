/**
 * Silent Classroom.
 * http://codeforces.com/contest/1166/problem/A
 */
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin>>n;
    string name;
    unordered_map<char, int> m;
    for (int i = 0; i < n; ++i) {
        cin >> name;
        ++m[name[0]];
    }
    int ans = 0;
    for (auto& p : m) {
        if (p.second > 2) {
            int cnt = p.second / 2;
            if (p.second % 2 == 0) {
                ans += 2 * (cnt * (cnt - 1) / 2);
            } else {
                ans += (cnt * (cnt - 1) / 2) + (cnt * (cnt + 1) / 2);
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}
