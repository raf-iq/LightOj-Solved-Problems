#include<bits/stdc++.h>

using namespace std;
int main ()
{
    char pd[20];
    int T,test=1;
    cin >> T;
    while(T--){
        cin >> pd;
        int i,ln=strlen(pd),n=ln-1;
        for(i=0; i<ln/2; i++){
            if(pd[i] != pd[n--]){
                cout << "Case " << test++ << ": " << "No\n";
                break;
            }
        }
        if(i == ln/2)
            cout << "Case " << test++ << ": " << "Yes\n";
    }

    return 0;
}
