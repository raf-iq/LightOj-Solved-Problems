#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    int T,test=1;
    cin >> T;
    while(T--){
        int n,m,k;
        cin >> n >> m >> k;
        set<int> person[n];
        for(int i=0; i<n; ++i){
            for(int j=0; j<k; ++j){
                int a;
                cin >> a;
                person[i].insert(a);
            }
        }
        int p;
        cin >> p;
        if(!p){
            bool unhappy=false;
            for(int i=0; i<n; ++i){
                if(*person[i].begin()>0){
                    unhappy=true;
                    break;
                }
            }
            if(unhappy){
                cout << "Case " << test++ << ": No\n";
            }
            else {
                cout << "Case " << test++ << ": Yes\n";
            }
        }
        else {
            set<int>v;
            for(int i=0; i<p; ++i){
                int s;
                cin >> s;
                v.insert(s);
            }
            bool unhappy=false;
            for(int i=0; i<n; ++i){
                bool ng=false,ps=false;
                for(set<int>::iterator it=person[i].begin(); it!=person[i].end(); ++it){
                    if(*it > 0 && find(v.begin(),v.end(), *it) != v.end()){
                        ps=true;
                        break;
                    }
                    else if(*it < 0){
                            if(find(v.begin(),v.end(), (-1)* *it) != v.end()){
                                ng=true;
                            }
                        else {
                            ps=true;
                        }
                    }
                }
                if(!ps ){
                    unhappy=true;
                    break;
                }

            }
            if(unhappy){
                cout << "Case " << test++ << ": No\n";
            }
            else {
                cout << "Case " << test++ << ": Yes\n";
            }
        }
    }
    return 0;
}
