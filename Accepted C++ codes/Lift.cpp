#include <bits/stdc++.h>

using namespace std;
int main()
{
    int T, test=1;
    cin >> T;
    while(T--){
        int me,lift;
        cin >> me >> lift;
        cout << "Case " << test++ << ": ";
        int timelagche=4*lift+19;
        if(me > lift){
            cout << (me-lift)*4+4*me+19 << endl;
        }
        else
            cout << timelagche << endl;
    }

    return 0;
}
