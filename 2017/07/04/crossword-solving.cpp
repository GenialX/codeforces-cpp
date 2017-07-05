/**
 * http://codeforces.com/contest/822/problem/B
 */
#include <iostream>

using namespace std;

#define MAX 1000

char s[MAX];
char t[MAX];
int k = 1E9, ck, pi = -1; // k, the current k, the index for p
int n, m;

int main(int argc, char * argv[])
{
    // init
    cin>>n;
    cin>>m;
    for (int i = 0; i < n; ++i) {
        cin>>s[i];
    }
    for (int i = 0; i < m; ++i) {
        cin>>t[i];
    }
    for (int i = 0; i < m - n + 1; ++i) {
        // get the current ck
        ck = 0;
        for (int j = 0; j < n; j++) {
            if (s[j] != t[i + j]) {
                ++ck;
            }
        }
        // get the most small k and p
        if (ck < k) {
            k = ck;
            pi = i;
        }
    }

    // echo
    cout<<k<<endl;
    for (int i = 0; i < n; ++i) {
        if (t[pi + i] != s[i]) cout<<i + 1<<' ';
    }
}
