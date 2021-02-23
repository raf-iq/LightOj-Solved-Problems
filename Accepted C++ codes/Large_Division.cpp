#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll vagJay(ll rem,char ch){
    return 10*rem+ch-'0';
}
int main()
{
    int T,test=1;
    cin >> T;
    while(T--){
        string vajjo;
        ll vajok;
        cin >> vajjo >> vajok;
        if(vajok<0)
            vajok=-vajok;
        ll reminder=0;
        for(int i=0; i<vajjo.size(); ++i){
            if(vajjo[i]!='-'){
                reminder=vagJay(reminder,vajjo[i]);
                if(vajok<=reminder){
                    int r=reminder/vajok;
                    reminder=reminder-r*vajok;
                }
            }
        }
        if(!reminder)
            cout << "Case " << test++ << ": divisible\n";
        else
            cout << "Case " << test++ << ": not divisible\n";
    }
    return 0;
}
