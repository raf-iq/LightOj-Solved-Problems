#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,test=1;
    cin >> T;
    while(T--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a > b && a > c){
            if(a*a == b*b+c*c)
                cout << "Case " << test++ << ": yes\n";
            else
                cout << "Case " << test++ << ": no\n";
        }
        else if(b >a && b>c){
            if(b*b == a*a+c*c)
                cout << "Case " << test++ << ": yes\n";
            else
                cout << "Case " << test++ << ": no\n";
        }
        else{
            if(c*c == a*a+b*b)
                cout << "Case " << test++ << ": yes\n";
            else
                cout << "Case " << test++ << ": no\n";
        }

    }
    return 0;
}
