#include<bits/stdc++.h>
#define mod 10000007
using namespace std;

int a, b, c, d, e, f;
int fn(int *dp, int n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(dp[n-1] != -1){
        return dp[n-1];
    }
    dp[n-1]=( fn(dp,n-1)%mod + fn(dp,n-2)%mod + fn(dp,n-3)%mod + fn(dp,n-4)%mod + fn(dp,n-5)%mod + fn(dp,n-6)%mod );
    return dp[n-1];
}
int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        int dp[n];
        memset(dp,-1,sizeof(dp));
        printf("Case %d: %d\n", ++caseno, fn(dp,n) % mod);
    }
    return 0;
}
