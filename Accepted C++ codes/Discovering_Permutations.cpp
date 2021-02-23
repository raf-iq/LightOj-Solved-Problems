#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    int T,test=1;
    cin >> T;
    while(T--){
        int n,k;
        cin >> n >> k;
        string s="";
        char a='A';
        for(int i=0; i<n; ++i){
            s+=a;
            a++;
        }
        cout << "Case " << test++ << ":\n";
        do{
            cout << s << endl;
            if(--k==0)
                break;
        }while(next_permutation(s.begin(),s.end()));
    }
    return 0;
}
