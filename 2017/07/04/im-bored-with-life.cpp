/*
 * http://codeforces.com/contest/822/problem/A
 */
#include<iostream>
#include<algorithm>

using namespace std;

int main(int argc, char * argv[])
{
    long long a, b, c = 1, min_num, i;
    cin>>a;
    cin>>b;
    min_num = min(a, b);
    for (i = 1; i <= min_num; i++) {
        c *= i;
    }
    cout<<c;
}
