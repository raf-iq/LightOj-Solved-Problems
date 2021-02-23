#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,cas=1;
    cin >> T;
    while(T--){
       int N,ip;
       cin >> N;
       int sum=0;
       for(int i=0; i<N; ++i){
            cin >> ip;
            if(ip > 0)
                sum+=ip;
       }
       cout << "Case " << cas++ << ": " << sum << endl;
    }

    return 0;
}
