/**
 * http://codeforces.com/contest/822/problem/C
 *
 * not accepted at the 33st test.
 *
 * now this case is accepted, because that values of the local array is random, so...
 * see: https://zhidao.baidu.com/question/137051525.html
 */
#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 210000

using namespace std;

typedef struct voucher
{
    int l;
    int r;
    int type; // 0 for the l, 1 for the r
    int c;

    friend bool operator <( const voucher &a,const voucher &b)
    { 
        int av = a.r, bv = b.r;
        if (a.type == 0) {
            av = a.l;
        }
        if (b.type == 0) {
            bv = b.l;
        }
        if (av == bv && a.type != b.type)
        {
            return a.type == 0;
        }
        return av < bv;
    }
} Voucher;

vector<Voucher> vouchers;

int n, x, c = -1;
int dp[MAX];

int main(int argc, char * argv[]) 
{
    cin>>n;
    cin>>x;
    for (int i = 0; i < n; i++) {
        Voucher voucher;
        cin>>voucher.l;
        cin>>voucher.r;
        cin>>voucher.c;
        voucher.type = 0;
        vouchers.push_back(voucher);
        voucher.type = 1;
        vouchers.push_back(voucher);
    }

    sort(vouchers.begin(), vouchers.end()); // sort by the l or r, asc

    // dp
    for (int i = 0; i < vouchers.size(); ++i) {
        int dur = vouchers[i].r - vouchers[i].l + 1;
        if (vouchers[i].type == 1) // for arriving
        {
            if (dp[dur] == 0 || dp[dur] > vouchers[i].c) dp[dur] = vouchers[i].c;
        }
        else
        { // for leaving
            int left = x - dur;
            if (left <= 0 || dp[left] == 0) continue;
            if (dp[left] + vouchers[i].c < c || c == -1) c = dp[left] + vouchers[i].c;
        }
    }
    cout<<c;
    return 0;
}
