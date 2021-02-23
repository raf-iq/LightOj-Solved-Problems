#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,cas=1;
    cin >> T;
    while(T--){
        int n,p,q,egg=0;
        cin >> n >> p >> q;
        int eg[n];
        for(int i=0; i<n; ++i){
            cin >> eg[i];
        }
        for(int i=0; i<n; ++i){
            if(eg[i] <= q && egg != p){
                egg++;
                q-=eg[i];
            }
            else
                break;

        }

       cout << "Case " << cas++ << ": " << egg << endl;
    }

    return 0;
}
