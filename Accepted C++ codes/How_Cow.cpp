#include <bits/stdc++.h>

using namespace std;
int main()
{
    int T, test=1;
    cin >> T;
    while(T--){
        int x1,x2,y1,y2,m,x,y;
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> m;
        cout << "Case " << test++ << ":\n";
        for(int i=0; i<m ; ++i){
            cin >> x >> y;
            if((x>=x1 && x <= x2) && (y >= y1 && y <=y2))
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }

    return 0;
}
