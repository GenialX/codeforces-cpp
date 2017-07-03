/**
 * http://codeforces.com/contest/822/problem/B
 */
#include <iostream>

using namespace std;

#define MAX 1000

int main(int argc, char * argv[])
{
    char s[MAX];
    char t[MAX];
    int p[MAX];
    int cp[MAX]; // the current for p
    int k, ck, cpi, pi; // k, the current k, the index for cp, the index for p
    int n, m;

    // init
    cin>>n;
    cin>>m;
    for (int i = 0; i < n; i++) {
        cin>>s[i];
    }
    for (int i = 0; i < m; i++) {
        cin>>t[i];
    }
    for (int i = 0; i < m - n + 1; i++) {
        // get the current ck and cp
        ck = 0, cpi = 0;
        for (int j = 0; j < n; j++) {
            if (s[j] != t[i + j]) {
                ck++;
                cp[cpi++] = j + 1;
            }
        }
        // get the most small k and p
        if ((k == 0 && ck > 0) || (k != 0 && ck < k && ck != 0)){
            k = ck;
            for (int i = 0; i < cpi; i++) {
                p[i] = cp[i];
                pi = cpi;
            }
        }
    }

    // echo
    cout<<k<<endl;
    for (int i = 0; i < pi; i++) {
        cout<<p[i]<<' ';
    }
    return 0;
}
