#include <bits/stdc++.h>
using namespace std;
int ones(int n){
    int one=0;
    while(n){
        if(n%2 == 1)
            one++;
        n/=2;
    }
    return  one;
}
int main()
{
    int T,test=1;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int m=ones(n);
        cout << "Case " << test++ << ": ";
        if(m%2==0){
            cout << "even\n";
        }
        else
            cout << "odd\n";
    }

    return 0;
}
