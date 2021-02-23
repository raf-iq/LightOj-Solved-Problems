#include<bits/stdc++.h>
using namespace std;
int convert(int n){
    int num=0;
    for(int i=0; i<8; i++){
        int h=n%10;
        num+=h*pow(2,i);
        n/=10;
    }
    return num;
}
int main ()
{
    int T,test=1;
    cin >> T;
    while(T--){
        int a,b,c,d,a1,b1,c1,d1;
        char dum;
        cin >> a >> dum >> b >> dum >> c >> dum >> d;
        cin >> a1 >> dum >> b1 >> dum >> c1 >> dum >> d1;
        a1=convert(a1);
        b1=convert(b1);
        c1=convert(c1);
        d1=convert(d1);
        if(a == a1 && b == b1 && c == c1 && d == d1){
            cout << "Case " << test++ << ": Yes\n";
        }
        else
            cout << "Case " << test++ << ": No\n";
    }
    return 0;
}

