#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
int main()
{
    //ios :: sync_with_stdio(false);
    int N,test=1;
    scanf("%d",&N);
    while(N--){
        double r;
        scanf("%lf",&r);
        printf("Case %d: %.2f\n",test++,((4*r*r)-(pi*r*r))+pow(10,-9));
    }
    return 0;
}
