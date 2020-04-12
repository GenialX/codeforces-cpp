#include <bits/stdc++.h>

using namespace std;

int f(int n) {
    if (n == 1) return 1;
    return f(n - 1) + 1;
}
int main() {
    int n, t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n;
        cout << n << endl;
    }
    //cout<<f(n)<<endl;
    return 0;
}
