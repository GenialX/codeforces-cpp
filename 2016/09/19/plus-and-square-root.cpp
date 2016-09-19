/**
 * http://codeforces.com/contest/715/problem/A
 */
#include<iostream>

using namespace std;

int main(int argc, char * argv[])
{
    long long n = 10;
    cout<<2<<endl;
    for (long long i = 2; i <= n; i++)
    {
        cout<<i * (i + 1) * (i + 1) - i + 1<<endl;
    }
}
