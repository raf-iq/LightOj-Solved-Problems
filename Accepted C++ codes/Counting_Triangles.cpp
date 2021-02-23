#include<bits/stdc++.h> 
#define ll long long int
using namespace std;
int b_search(int a[],int j,int n,int item){
    int i=0;
    while(j<=n){
        int mid=(j+n)/2;
        if(a[mid]==item)
            return mid-1;
        else if(a[mid]>item){
            i=mid;
            j=mid+1;
        }
        else
            n=mid-1;
    }
    return i;
}
int main()
{
    int T,test=1;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; ++i){
            scanf("%d",&a[i]);
        }
        sort(a,a+n,greater<int>());
        int cnt=0;
        for(int i=0; i<n-2; ++i){
            int f=a[i];
            for(int j=i+1; j<n-1; ++j){
                int b=f-a[j];
                int _f=b_search(a,j+1,n-1,b);
                if(_f)
                    cnt+=(_f-j);
            }
        }
        printf("Case %d: %d\n",test++,cnt);
    }
    return 0;
}